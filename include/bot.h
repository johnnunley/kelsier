/*
 * =====================================================================================
 *
 *       Filename:  bot.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/07/2017 12:40:49 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  J.T. Nunley (JaydomStudios), jtnunley01@gmail.com
 *   Organization:  JaydomStudios
 *
 * =====================================================================================
 */

#ifndef BOT_H
#define BOT_H

#include "action.h"
#include "flags.h"

class Memory {
  public:
    vector<FlaggedAction> f_certain_actions;
    vector<FlaggedVariable> f_certain_variables;
    vector<FlaggedAction> f_uncertain_actions;
    vector<FlaggedVariable> f_uncertain_variables;
    vector<Action> p_saved_actions;
    vector<Action> n_saved_actions;
    vector<PreAction> m_preactions;
}

class KelsierBot { 
  private:
    Memory currentMemory;
    vector<Memory> pastMemories;
    int currentStep = 0; 
  public:
    KelsierBot(string previousMemLocation);
    void loadPreactions(vector<PreAction> preactions); 
    void executeStep();
    int getCurrentStep();
};

#endif
