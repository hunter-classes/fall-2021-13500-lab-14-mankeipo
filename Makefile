main: main.o 
	g++ -o main main.o

tests: tests.o 
	g++ -o tests tests.o

main.o: main.cpp MyVector.h MyVector.cxx
	g++ -c main.cpp

tests.o: tests.cpp MyVector.h MyVector.cxx
	g++ -std=c++11 -c tests.cpp

clean: 
	rm -f main tests *.o
