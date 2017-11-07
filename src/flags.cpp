/*
 * =====================================================================================
 *
 *       Filename:  flags.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/07/2017 10:27:31 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  J.T. Nunley (JaydomStudios), jtnunley01@gmail.com
 *   Organization:  JaydomStudios
 *
 * =====================================================================================
 */

#include "flags.h"

FlaggedAction::FlaggedAction(Method me, int v, bool g) : m(me), val(v), good(g) { }

FlaggedVariable::FlaggedVariable(string n, bool v, bool g): varname(n), varvalue(v), good(g) {
}

FlaggedVariable FlaggedVariable::getOpposite() {
  FlaggedVariable f (varname, !varvalue, !good);
  return f;
}
