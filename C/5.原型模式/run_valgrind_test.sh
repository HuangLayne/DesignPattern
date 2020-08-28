#!/bin/bash
clear

rm -rf build
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug ../
make
valgrind --leak-check=full ./test-code
