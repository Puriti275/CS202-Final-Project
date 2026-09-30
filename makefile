CXX=		g++
CXXFLAGS=	-g -Wall -std=gnu++11
SHELL=		bash

all: main

main: main.o chess.o
	g++ main.o chess.o -o main

run: main.o chess.o
	g++ main.o chess.o -o main
	./main

main.o: main.cpp
	g++ -c main.cpp

chess.o: chess.cpp chess.h
	g++ -c chess.cpp