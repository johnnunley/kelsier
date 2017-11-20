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

FlaggedAction::FlaggedAction(Action a, FlagType f) : action(a), flag(f), vs(Variable::Null) { }

FlaggedAction::FlaggedAction(Action a, FlagType f, Variable v) : action(a), flag(f), vs(v) { }

MultiFlaggedAction::MultiFlaggedAction(vector<FlaggedAction> as, Variable vs) : FlaggedAction(as.back().action, as.back().flag), actions(as) { }

MutliFlaggedAction::MultiFlaggedAction(vector<FlaggedAction> as) : MutliFlaggedAction(as,Variable::Null) { }
