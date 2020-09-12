/****************************************************************
 * file headwebp_rps.hh
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 * Description:
 *      This file is part of the Reflective Persistent System.
 *      It is the public C++ header file of the web interface
 *
 * Author(s):
 *      Basile Starynkevitch <basile@starynkevitch.net>
 *      Abhishek Chakravarti <abhishek@taranjali.org>
 *      Nimesh Neema <nimeshneema@gmail.com>
 *
 *      © Copyright 2020 The Reflective Persistent System Team
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



#ifndef HEADWEB_RPS_INCLUDED
#define HEADWEB_RPS_INCLUDED

#include "refpersys.hh"
// for libonion Web service library, from https://www.coralbits.com/libonion/
#include "onion/onion.hpp"
#include "onion/http.hpp"
#include "onion/request.hpp"
#include "onion/response.hpp"

extern "C" Onion::Onion rps_onion_server;


#endif /* HEADWEB_RPS_INCLUDED */
/******* end of file headweb_rps.hh *******/
