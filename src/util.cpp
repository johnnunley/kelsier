#include "util.h"

#include <iostream>
#include <fstream>

template <class T>
TwoVectors<T> splitVector(vector<T> list, bool (*sorter)(T)) {
  TwoVectors<T> result;

  for (T item : list) {
    if (sorter(item))
      result.vector1.push_back(item);
    else
      result.vector2.push_back(item);
  }

  return result;
}

void writeStringToFile(string filename, string input) {
  ofstream output(filename);
  if (output.is_open()) {
    output << input;
    output.close();
  }
}
