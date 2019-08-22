#!/bin/bash

g++ -c --std=c++11 word_anagram.cpp main.cpp
g++ -o main word_anagram.o main.o

./main
