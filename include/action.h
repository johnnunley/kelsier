/*
 * =====================================================================================
 *
 *       Filename:  action.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/04/2017 04:05:40 PM
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

#ifndef ACTION_H
#define ACTION_H

#include "variable.h"
#include <vector>

typedef bool (*Method)(int);

class PreAction {
  public:
    Method method;
    VariableSet variables;
    PreAction(Method m);
};

class Action {
  public:
    Method method; 
    VariableSet variables;
    int score;
    Action(Method m, int s);
    Action(PreAction pa, int s);
};

#endif
