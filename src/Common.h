///////////////////////////////////////////////////////////////////////////////
// Dynamic Audio Normalizer
// Copyright (C) 2014 LoRd_MuldeR <MuldeR2@GMX.de>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version, but always including the *additional*
// restrictions defined in the "License.txt" file.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
// http://www.gnu.org/licenses/gpl-2.0.txt
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Platform.h"

#include <stdexcept>

#define MY_DELETE(X) do \
{ \
	if((X)) \
	{ \
		delete (X); \
		(X) = NULL; \
	} \
} \
while(0)

#define MY_DELETE_ARRAY(X) do \
{ \
	if((X)) \
	{ \
		delete [] (X); \
		(X) = NULL; \
	} \
} \
while(0)

extern const uint8_t *const DYAUNO_LOGLVL;
void setLoggingLevel(const uint8_t &value);

#define LOG_DBG(X, ...) do { if((*DYAUNO_LOGLVL) >= 2) PRINT(TXT("DEBUG: ")   X TXT("\n"), __VA_ARGS__); } while(0)
#define LOG_WRN(X, ...) do { if((*DYAUNO_LOGLVL) >= 1) PRINT(TXT("WARNING: ") X TXT("\n"), __VA_ARGS__); } while(0)
#define LOG_ERR(X, ...) do { if((*DYAUNO_LOGLVL) >= 0) PRINT(TXT("ERROR: ")   X TXT("\n"), __VA_ARGS__); } while(0)

#define MY_THROW(X) throw std::runtime_error((X))
