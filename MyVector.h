#pragma once

template <class T>
class MyVector{
public:
    MyVector();
	int size();
	int capacity();
	bool empty();
	void push_back(T item);
	void pop_back();
	void pop_back(int n);
	void clear();
	T &operator[] (int n);	

private:
    T *data;
	int vectSize;
	int vectCapacity;
};

#include "MyVector.cxx"
