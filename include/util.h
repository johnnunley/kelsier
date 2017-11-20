/*
 * =====================================================================================
 *
 *       Filename:  util.h
 *
 *    Description:  Utilites
 *
 *        Version:  1.0
 *        Created:  11/07/2017 12:36:18 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  J.T. Nunley (JaydomStudios), jtnunley01@gmail.com
 *   Organization:  JaydomStudios
 *
 * =====================================================================================
 */

#ifndef UTIL_H
#define UTIL_H

#include <vector>

// helper classes
template <class T1,class T2 = T1>
class TwoVectors {
  public:
    vector<T1> vector1;
    vector<T2> vector2;
};

// helper methods

template <class T>
TwoVectors<T> splitVector(vector<T> list, bool (*sorter)(T));

void writeStringToFile(string filename, string input);

#endif
