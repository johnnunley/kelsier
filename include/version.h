/*
 * =====================================================================================
 *
 *       Filename:  version.h
 *
 *    Description:  Provides methods that provides version information 
 *
 *        Version:  1.0
 *        Created:  11/03/2017 04:41:52 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  J.T. Nunley (JaydomStudios), jtnunley01@gmail.com
 *   Organization:  JaydomStudios
 *
 * =====================================================================================

This file is part of Kelsier.

Kelsier is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Kelsier is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Kelsier.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef VERSION_H
#define VERSION_H

#include <string>

using namespace std;

string getVersionMajor();
string getVersionMinor();
string getVersion();

#endif
