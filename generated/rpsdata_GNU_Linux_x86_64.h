//:SPDX-License-Identifier: GPL-3.0-or-later
//:GENERATED [GPLv3+] file generated/rpsdata_GNU_Linux_x86_64.h / DO NOT EDIT!
//:generating-git 082d32176cff+
//:This generated/rpsdata_GNU_Linux_x86_64.h file is generated by ...
//: the RefPerSys 0.6
//:open source software.  See refpersys.org and
//:contact team@refpersys.org
//:This file is part of the Reflective Persistent System.
//:Copyright (C) 2019 - 2024 The Reflective Persistent Team
//: see refpersys.org and contact team@refpersys.org for more.
//:_
//:This program is free software: you can redistribute it and/or modify
//:it under the terms of the GNU General Public License as published by
//:the Free Software Foundation, either version 3 of the License, or
//:(at your option) any later version.
//:_
//:This program is distributed in the hope that it will be useful,
//:but WITHOUT ANY WARRANTY; without even the implied warranty of
//:MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//:GNU General Public License for more details.
//:_
//:You should have received a copy of the GNU General Public License
//:along with this program.  If not, see <http://www.gnu.org/licenses/>.
//:generated from git 082d32176cff+ branch master
//: emitted from dump_rps.cc:1238
//: by void Rps_Dumper::write_generated_data_file()
/// generated by write_generated_data_file from dump_rps.cc:1241
#ifndef RPS_DATA_INCLUDED
#define RPS_DATA_INCLUDED 1
#define RPS_BUILDING_HOST "rimski"
#define RPS_BUILDING_OPERATING_SYSTEM "GNU_Linux"
#define RPS_BUILDING_MACHINE "x86_64"
#define RPS_PATH_BYTE_SIZE 384
#define RPS_BUILDING_WORKING_DIRECTORY rps_topdirectory
#define RPS_SIZEOF_BOOL 1
#define RPS_SIZEOF_SHORT 2
#define RPS_SIZEOF_INT 4
#define RPS_SIZEOF_LONG 8
#define RPS_SIZEOF_FLOAT 4
#define RPS_SIZEOF_DOUBLE 8
#define RPS_SIZEOF_PTR 8
#define RPS_SIZEOF_INT 4
#define RPS_SIZEOF_LONG 8
#define RPS_SIZEOF_PTR 8
/// c++ size std::mutex & std::recursive_mtx & std::string
#define RPS_SIZEOF_STDMUTEX 40
#define RPS_SIZEOF_STDRECURSIVEMUTEX 40
#define RPS_SIZEOF_STDSTRING 32
/// c++ size std::lock_guard<std::recursive_mutex> & std::map<std::string,void*>
#define RPS_SIZEOF_LOCKGURECMTX 8
#define RPS_SIZEOF_MAPSTR2PTR 48
#define RPS_SIZEOF_FILE 216
#define RPS_SIZEOF_STRINGSTREAM 392
#define RPS_SIZEOF_INTPTR_T 8
#define RPS_SIZEOF_PID_T 4
#define RPS_SIZEOF_PTHREAD_T 8
#define RPS_SIZEOF_JMP_BUF 200
#define RPS_SIZEOF_VALUE 8
#define RPS_SIZEOF_TWOVALUES 16
#define RPS_SIZEOF_OBJECTREF 8
#define RPS_SIZEOF_RPS_OBJECTZONE 192
#define RPS_SIZEOF_RPS_OBJECTVALUE 8
#define RPS_SIZEOF_RPS_STRING 48
#define RPS_SIZEOF_RPS_DOUBLE 32
#define RPS_SIZEOF_RPS_SETOB 32
#define RPS_SIZEOF_RPS_TUPLEOB 32
#define RPS_SIZEOF_RPS_CLOSUREZONE 64
#define RPS_SIZEOF_RPS_INSTANCEZONE 64
#define RPS_SIZEOF_RPS_CALLFRAME 96
#define RPS_SIZEOF_RPS_PAYLOAD 32
#define RPS_SIZEOF_RPS_TOKENSOURCE 200
///
#define RPS_ALIGNOF_BOOL 1
#define RPS_ALIGNOF_SHORT 2
#define RPS_ALIGNOF_INT 4
#define RPS_ALIGNOF_LONG 8
#define RPS_ALIGNOF_FLOAT 4
#define RPS_ALIGNOF_DOUBLE 8
#define RPS_ALIGNOF_PTR 8
#define RPS_ALIGNOF_INT 4
#define RPS_ALIGNOF_LONG 8
#define RPS_ALIGNOF_INTPTR_T 8
#define RPS_ALIGNOF_STDMUTEX 8
#define RPS_ALIGNOF_STDRECURSIVEMUTEX 8
#define RPS_ALIGNOF_STDSTRING 8
/// c++ align std::lock_guard<std::recursive_mutex> & std::map<std::string,void*>
#define RPS_ALIGNOF_LOCKGURECMTX 8
#define RPS_ALIGNOF_MAPSTR2PTR 8
#define RPS_ALIGNOF_FILE 8
#define RPS_ALIGNOF_STRINGSTREAM 8
#define RPS_ALIGNOF_PID_T 4
#define RPS_ALIGNOF_PTHREAD_T 8
#define RPS_ALIGNOF_JMP_BUF 8
#define RPS_ALIGNOF_VALUE 8
#define RPS_ALIGNOF_TWOVALUES 8
#define RPS_ALIGNOF_OBJECTREF 8
#define RPS_ALIGNOF_RPS_OBJECTZONE 16
#define RPS_ALIGNOF_RPS_OBJECTVALUE 8
#define RPS_ALIGNOF_RPS_STRING 16
#define RPS_ALIGNOF_RPS_DOUBLE 16
#define RPS_ALIGNOF_RPS_SETOB 16
#define RPS_ALIGNOF_RPS_TUPLEOB 16
#define RPS_ALIGNOF_RPS_CLOSUREZONE 16
#define RPS_ALIGNOF_RPS_INSTANCEZONE 16
#define RPS_ALIGNOF_RPS_CALLFRAME 8
#define RPS_ALIGNOF_RPS_PAYLOAD 16
#define RPS_ALIGNOF_RPS_TOKENSOURCE 8

#define RPS_VALUE_IS_VOIDPTR 1
#define RPS_OBJECTREF_IS_OBJECTPTR 1


#define RPS_FLTK_ABI_VERSION 10300
#define RPS_FLTK_API_VERSION 10309
#define RPS_WITH_FLTK 1

/// FLTK related sizes and alignments from rps_fltk_emit_sizes
/// for FLTK 10309
#define RPS_FLTK_SIZEOF_FL_WINDOW 240
#define RPS_FLTK_SIZEOF_MAIN_WINDOW 632
#define RPS_FLTK_SIZEOF_FL_WIDGET 120
#define RPS_FLTK_SIZEOF_FL_BUTTON 4
#define RPS_FLTK_SIZEOF_FL_MENU_BAR 152
#define RPS_FLTK_SIZEOF_FL_TEXT_BUFFER 136
#define RPS_FLTK_SIZEOF_FL_TEXT_EDITOR 448

#define RPS_FLTK_ALIGNOF_FL_WINDOW 8
#define RPS_FLTK_ALIGNOF_MAIN_WINDOW 8
#define RPS_FLTK_ALIGNOF_FL_WIDGET 8
#define RPS_FLTK_ALIGNOF_FL_BUTTON 4
#define RPS_FLTK_ALIGNOF_FL_MENU_BAR 8
#define RPS_FLTK_ALIGNOF_FL_TEXT_BUFFER 8
#define RPS_FLTK_ALIGNOF_FL_TEXT_EDITOR 8
//// end of FLTK sizes and alignments for api 10309 abi 10300
///
#endif //RPS_DATA_INCLUDED


//// generated at 2024-Oct-16 12:29:11 CEST on rimski


//// end of generated generated/rpsdata_GNU_Linux_x86_64.h by write_generated_data_file for shortgitid:082d32176cff+
