#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "MyVector.h"




TEST_CASE("Empty Vector") {
	MyVector<int> v;
	MyVector<std::string> v1;
	CHECK(v.size() == 0);
	CHECK(v.capacity() == 15);
	CHECK(v.empty() == true);

	CHECK(v1.size() == 0);
    CHECK(v1.capacity() == 15);
    CHECK(v1.empty() == true);
}

TEST_CASE("Testing push_back") {
	MyVector<int> v;
	MyVector<std::string> v1;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	for(int i = 0; i< v.size(); i++) {
		CHECK(v[i] == i + 1);
	}

	v1.push_back("one");
	v1.push_back("two");
	v1.push_back("three");
	v1.push_back("four");
	v1.push_back("five");
	
	std::string arr[] = {"one", "two", "three", "four", "five"};
	
	 for(int i = 0; i< v1.size(); i++) {
        CHECK(v1[i] == arr[i]);
    }
	CHECK(v1.size() == 5);
	CHECK(v.size() == 5);

	
}

TEST_CASE("Testing pop_back no param") {
	MyVector<int> v;
	
	CHECK(v.size() == 0);
	v.push_back(1);
	CHECK(v.size() == 1);
	v.push_back(2);
	CHECK(v.size() == 2);
	v.pop_back();
	CHECK(v.capacity() == 15);
	CHECK(v.size() == 1);
	v.push_back(3);
	CHECK(v.size() == 2);
	CHECK(v.capacity() == 15);
	v.pop_back();
	CHECK(v.capacity() == 15);
	CHECK(v.size() == 1);
	v.pop_back();
	CHECK(v.empty() == true);
}

TEST_CASE("Testing pop_back with param") {
	MyVector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	v.pop_back(1);
	CHECK(v.size() == 2);
	CHECK(v[0] == 1);
	CHECK(v[1] == 3);
	
	v.push_back(4);
	v.push_back(5);

	v.pop_back(0);

	CHECK(v[0] == 3);
	CHECK(v[1] == 4);
	CHECK(v[2] == 5);
	
}

TEST_CASE("Testing clear") {
	MyVector<int> v;
	for( int i = 0; i < 5; i++) {
		v.push_back(i);
	}


	CHECK(v.size() == 5);

	v.clear();

	CHECK(v.size() == 0);

	for(int i = 0; i < 5; i++) {
		CHECK(v[i] == 0);
	}



}
