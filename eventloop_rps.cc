/****************************************************************
 * file eventloop_rps.cc
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 * Description:
 *      This file is part of the Reflective Persistent System.
 *
 *      It has the JSONRPC code to user-interface to an external process (using JSONRPC protocol)
 *
 * Author(s):
 *      Basile Starynkevitch <basile@starynkevitch.net>
 *      Abhishek Chakravarti <abhishek@taranjali.org>
 *      Nimesh Neema <nimeshneema@gmail.com>
 *
 *      © Copyright 2022 The Reflective Persistent System Team
 *      team@refpersys.org & http://refpersys.org/
 *
 * License:
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************/


#include "refpersys.hh"


extern "C" const char rps_jsonrpc_gitid[];
const char rps_jsonrpc_gitid[]= RPS_GITID;

extern "C" const char rps_jsonrpc_date[];
const char rps_jsonrpc_date[]= __DATE__;


extern "C" void jsonrpc_initialize_rps(void);


/**
   Function jsonrpc_initialize_rps is called once from main, when
   rps_fifo_prefix is not empty. It is expected to create the FIFOs if
   they dont exist ....
***/
void
jsonrpc_initialize_rps(void)
{
#warning unimplemented  jsonrpc_initialize_rps
  RPS_FATALOUT("unimplemented jsonrpc_initialize_rps with fifo prefix "
               << rps_get_fifo_prefix());
} // end jsonrpc_initialize_rps

 void
 rps_event_loop(void)
 {
#warning unimplemented rps_event_loop
   RPS_ASSERT(rps_is_main_thread()); 
   RPS_FATALOUT("unimplemented rps_event_loop");
 } // end rps_event_loop




/// end of file eventloop_rps.cc