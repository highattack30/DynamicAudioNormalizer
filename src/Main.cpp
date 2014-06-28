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

#include "Common.h"
#include "Version.h"

int wmain(int argc, wchar_t* argv[])
{
	PRINT("Dynamic Audio Normalizer, Version %u.%02u-%u\n", DYAUNO_VERSION_MAJOR, DYAUNO_VERSION_MINOR, DYAUNO_VERSION_PATCH);
	PRINT("Copyright (c) 2014 LoRd_MuldeR <mulder2@gmx.de>. Some rights reserved.\n");
	PRINT("Built on %s at %s with %s for Win-%s.\n\n", DYAUNO_BUILD_DATE, DYAUNO_BUILD_TIME, DYAUNO_COMPILER, DYAUNO_ARCH);

	PRINT("This program is free software: you can redistribute it and/or modify\n");
	PRINT("it under the terms of the GNU General Public License <http://www.gnu.org/>.\n");
	PRINT("Note that this program is distributed with ABSOLUTELY NO WARRANTY.\n\n");

	return 0;
}
