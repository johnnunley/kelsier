/*
 * =====================================================================================
 *
 *       Filename:  version.cpp
 *
 *    Description:  Provides methods that provide version information
 *
 *        Version:  1.0
 *        Created:  11/04/2017 01:42:26 PM
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

#include "version.h"

string getVersionMajor() { return "ALPHA"; }
string getVersionMinor() { return "3"; }
string getVersion() { return getVersionMajor() + "." + getVersionMinor(); }
