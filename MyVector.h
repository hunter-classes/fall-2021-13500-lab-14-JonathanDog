#pragma once

template <class T>
class MyVector{
public:
    MyVector (T a, T b, T c);

    void printem();
private:
    T data[3];
};

#include "MyVector.cxx"
