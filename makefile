BigFloat.o : BigFloat.cc BigFloat.h
	g++ -c -std=c++11 -O6 BigFloat.cc
MainTest.o : MainTest.cpp BigFloat.h
	g++ -c -std=c++11 -O6 MainTest.cpp
Factorial.o : Factorial.cpp BigFloat.h
	g++ -c -std=c++11 -O6 Factorial.cpp
MainTest : MainTest.o BigFloat.o                                   
	g++ -o MainTest MainTest.o BigFloat.o
Factorial : Factorial.o BigFloat.o              
	g++ -o Factorial Factorial.o BigFloat.o

all: MainTest Factorial
