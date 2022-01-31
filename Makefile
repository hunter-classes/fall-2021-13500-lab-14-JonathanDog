# Note that we just compile main.cpp 
# and it includes Three.h which includes Three.cxx
# and we're doing that for the templates.

main: main.o 
	g++ -o main main.o 

tests: tests.o 
	g++ -o tests tests.o  

main.o: main.cpp MyVector.h MyVector.cxx 

tests.o: tests.cpp doctest.h MyVector.h MyVector.cxx

clean:
	rm -f main.o tests.o
