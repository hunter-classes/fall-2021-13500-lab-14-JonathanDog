#include <iostream>
#include "MyVector.h"

template <class T>
MyVector<T>::MyVector () {
	data = new T[15];
	vectSize = 0;
	vectCapacity = 15;
}

template <class T>
void MyVector<T>::size() {
	return vectSize;
}

template <class T>
void MyVector<T>::capactiy() {
	return vectCapacity;
}

template <class T>
bool MyVector<t>::empty() {
	return vectSize == 0;
}

template <class T>
void MyVector<T>


