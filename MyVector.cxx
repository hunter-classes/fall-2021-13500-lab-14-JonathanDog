#include <iostream>
#include "MyVector.h"

template <class T>
MyVector<T>::MyVector (T a, T b, T c) {
  data[0] = a;
  data[1] = b;
  data[2] = c;
 }

template <class T>
void MyVector<T>::printem() {
 for(int i = 0; i<3; i++) {
 	std::cout << data[i] << " ";
  }
  std::cout  << "\n";
}


