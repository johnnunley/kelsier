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

enum class FlagType {
  OK,
  FlaggedVariablePos,
  FlaggedVariableBad,
  Bad 
}

class FlaggedAction {
  public:
    Action a;
    int val;
    FlagType flag;
    Variable vs;    
    FlaggedAction(Method me, int v, FlagType f);
    FlaggedAction(Method me, int v,
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
