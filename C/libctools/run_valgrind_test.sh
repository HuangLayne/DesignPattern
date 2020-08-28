#!/bin/bash
clear

rm -rf build
mkdir -p build/valgrind
cd build
cmake -DCMAKE_BUILD_TYPE=Debug ../tests/
make

echo -e "\033[1;43;30m\ntest_memory_leak...\033[0m"
valgrind --leak-check=full --log-file=valgrind/test_memory_leak.log ./test_memory_leak
cat memory_leak_info.txt

echo -e "\033[1;43;30m\ntest_deadlock...\033[0m"
valgrind --leak-check=full --log-file=valgrind/test_deadlock.log ./test_deadlock

cat valgrind/test_memory_leak.log
cat valgrind/test_deadlock.log
