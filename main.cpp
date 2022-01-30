#include "MyVector.h"
#include <iostream>
int main() {
	MyVector<int> t(10,20,30);
	t.printem();
	
	MyVector<std::string> t2("one","two","three");
	t2.printem();
	return 0;
}
