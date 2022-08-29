CC = g++
OBJ_FLAGS = -std=c++11 -O3 -Wall
BIN_FILES = Test Factorial

all: ${BIN_FILES}

BigFloat.o : BigFloat.cc
	${CC} -c ${OBJ_FLAGS} $^
Test.o : Test.cpp
	${CC} -c ${OBJ_FLAGS} $^
Factorial.o : Factorial.cpp
	${CC} -c ${OBJ_FLAGS} $^

Test : Test.o BigFloat.o
	${CC} -o $@ $^
Factorial : Factorial.o BigFloat.o
	${CC} -o $@ $^

.PHONY: clean

clean:
	rm -f *.o  ${BIN_FILES}
