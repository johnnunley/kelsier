/*
 * =====================================================================================
 *
 *       Filename:  flags.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/07/2017 10:22:34 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  J.T. Nunley (JaydomStudios), jtnunley01@gmail.com
 *   Organization:  JaydomStudios
 *
 * =====================================================================================
 */

#ifndef FLAGS_H
#define FLAGS_H

#include "action.h"

class FlaggedAction {
  public:
    Method m;
    int val;
    bool good;
    FlaggedAction(Method me, int v, bool g);
};

class FlaggedVariable {
  public:
    string varname;
    bool varvalue;
    bool good;
    FlaggedVariable(string n, bool v, bool g);
    FlaggedVariable getOpposite();
};

#endif
