#include "lib.h"


#define SZHDR 1


rps_mem *
rps_mem_new(size_t sz)
{
	uintptr_t *bfr;
	
	assert(sz);
	if (__predict_false(!(bfr = malloc(sz + SZHDR))))
		err_fatal(ENOMEM, ERR_L01);

	*bfr = sz;
	explicit_bzero(bfr + SZHDR, sz);
	return bfr;
}


size_t
rps_mem_sz(const rps_mem *bfr)
{
	assert(bfr);
	return ((uintptr_t *)bfr)[-SZHDR];
}


void
rps_mem_free(rps_mem *bfr)
{
	void *b;
	
	b = bfr - SZHDR;
	explicit_bzero(b, rps_mem_sz(bfr) + SZHDR);
	free(b);
}

