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
    vector<FlaggedAction> flaggedActions;
    vector<Action> posActions;
    vector<Action> negActions;
    vector<PreAction> preActionList;
    static Memory loadFromFile(string file);
    void saveToFile(string file); 
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
