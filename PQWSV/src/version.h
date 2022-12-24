/*

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

	
*/
// version.h

#ifndef __VERSION_H__
#define __VERSION_H__


#if defined(_WIN32)
#define QW_PLATFORM			"Windows"
#define QW_PLATFORM_SHORT	"w"

#elif defined(__FreeBSD__)
#define QW_PLATFORM			"FreeBSD"
#define QW_PLATFORM_SHORT	"f"

#elif defined(__OpenBSD__)
#define QW_PLATFORM			"OpenBSD"
#define QW_PLATFORM_SHORT	"o"

#elif defined(__NetBSD__)
#define QW_PLATFORM			"NetBSD"
#define QW_PLATFORM_SHORT	"n"

#elif defined(__DragonFly__)
#define QW_PLATFORM			"DragonFly"
#define QW_PLATFORM_SHORT	"d"

#elif defined(__linux__)
#define QW_PLATFORM			"Linux"
#define QW_PLATFORM_SHORT	"l"

#elif defined(__sun__)
#define QW_PLATFORM			"SunOS"
#define QW_PLATFORM_SHORT	"s"

#elif defined(__APPLE__)
#define QW_PLATFORM			"MacOS"
#define QW_PLATFORM_SHORT	"m"

#else
#define QW_PLATFORM			"Unknown"
#define QW_PLATFORM_SHORT	"u"
#endif


#define QW_VERSION          "2.40"
//#define VERSION_NUMBER      "0.33-beta"
//#define VERSION_NUM         0.32
//#define SERVER_NAME         "MVDSV"
#define VERSION_NUMBER      "0.33 (" QW_PLATFORM_SHORT ")"
#define VERSION_NUM         0.33
#define VERSION_PQWSV       "0.41" // Added September 2020
#define SERVER_NAME         "MVDSV" //"PQWSV" (NOTE: Needs to contain MVDSV or EZQuake clients' downloads break appart...)
//#define SERVER_FULLNAME     "MVDSV: MultiView Demo SerVer"
#define SERVER_FULLNAME     "PQWSV: Prozac QuakeWorld SV"
//#define HOMEPAGE_URL        "https://mvdsv.deurk.net"
#define HOMEPAGE_URL        "http://quake.midioz.com"
#define BUILD_DATE          __DATE__ ", " __TIME__
#define GIT_COMMIT          ""
#define PQWSV_STRING       "0.33 (PQWSV " VERSION_PQWSV " " QW_PLATFORM_SHORT ")"


#define QWDTOOLS_NAME       "QWDtools"

char *VersionStringFull (void);

#endif /* !__VERSION_H__ */

