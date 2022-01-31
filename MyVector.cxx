#include <iostream>
#include "MyVector.h"

template <class T>
MyVector<T>::MyVector () {
	data = new T[15];
	vectSize = 0;
	vectCapacity = 15;
}

template <class T>
int MyVector<T>::size() {
	return vectSize;
}

template <class T>
int MyVector<T>::capacity() {
	return vectCapacity;
}

template <class T>
bool MyVector<T>::empty() {
	return vectSize == 0;
}

template <class T>
void MyVector<T>::push_back(T element) {
	//if there is room to add
	if(vectSize < vectCapacity) {
		data[vectSize] = element;
		vectSize++;
	} else {
		//should be adding capacticy logarithmically
		vectCapacity += 5;
		T *temp = new T[vectCapacity];
		for(int i = 0; i<vectSize; i++) {
			temp[i] = data[i];
		}
		temp[vectSize] = element;
		vectSize++;
		delete[] data;

		data = temp;
		delete[] temp;
		temp = nullptr;
	}

}

template <class T>
void MyVector<T>::pop_back() {
	if(vectSize > 0) {
		T* temp = new T[vectCapacity];
		
		for(int i = 0; i < vectSize - 1; i++) {
			temp[i] = data[i];
		}

		delete[] data;
		
		data = temp;
		
		vectSize -= 1;	

	}

}

template <class T>
void MyVector<T>::pop_back(int n) {
	if(n >= 0 && n < vectSize) {
		if(n == vectSize - 1) {
			MyVector::pop_back();
		}

		for(int i = n; i < vectSize - 1; i++) {
			data[i] = data[i + 1];
		}
		vectSize -= 1;
	}

}

template <class T>
void MyVector<T>::clear() {
	vectSize = 0;
	data = new T[vectCapacity];
}

template <class T>
T &MyVector<T>::operator[](int i) {
	return data[i];
}
