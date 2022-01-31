#include "MyVector.h"
#include <iostream>
int main() {
	MyVector<int> v;
    std::cout << "Initial vector size: " << v.size() << std::endl; 
    std::cout << "Initial vector capacity: " << v.capacity() << std::endl; 
    std::cout << "Initial vector is empty: " << v.empty() << std::endl; 

    v.push_back(5);
    std::cout << std::endl;
    std::cout << "Now added the number ";
    for(int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " "; 
    }
    std::cout << "to the vector." << std::endl;

    std::cout << "New vector size: " << v.size() << std::endl; 
    std::cout << "New vector capacity: " << v.capacity() << std::endl; 
    std::cout << "Vector is empty: " << v.empty() << std::endl; 
    std::cout << std::endl;

    MyVector<std::string>  strings;
   	strings.push_back("Cat");
    strings.push_back("Dog");
    strings.push_back("Hippo");
    strings.push_back("Bird");

    std::cout << "Created vector with these elements: ";
    for(int i = 0; i < strings.size(); i++) {
        if(i == strings.size()-1) {
            std::cout << strings[i];
        }
        else{
            std::cout << strings[i] << ", "; 
        }
    }
    std::cout << std::endl;

    strings.pop_back();
    std::cout << "Removed last element: ";
    for(int i = 0; i < strings.size(); i++) {
        if(i == strings.size()-1) {
            std::cout << strings[i];
        }
        else {
            std::cout << strings[i] << ", ";
        }
    }
    std::cout << std::endl;

    strings.pop_back(1);
    std::cout << "Removed second  element: ";
    for(int i = 0; i < strings.size(); i++) {
        if(i == strings.size()-1) {
            std::cout << strings[i];
        }
        else {
            std::cout << strings[i] << ", "; 
        }
    }

   std::cout << std::endl;
   std::cout << "Clearing vector" << std::endl;
   strings.clear();
   std::cout << "Vector Size: " << strings.size() << std::endl; 
   std::cout << std::endl;

   return 0;	
	
			
}
