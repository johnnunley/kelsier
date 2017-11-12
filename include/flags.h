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
    Action action;
    FlagType flag;
    Variable var;    
    FlaggedAction(Action a, FlagType f);
    FlaggedAction(Action a FlagType f, Variable vs);
};



#endif
