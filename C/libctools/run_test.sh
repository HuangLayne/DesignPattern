#!/bin/bash
clear

# THREAD_COUNT=-j`sysctl -n machdep.cpu.thread_count`
rm -rf build
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug ../tests/
make

echo -e "\033[1;43;30m\ntest_cbuffer...\033[0m"
./test_cbuffer

echo -e "\033[1;43;30m\ntest_memory_leak...\033[0m"
./test_memory_leak
cat memory_leak_info.txt

echo -e "\033[1;43;30m\ntest_list...\033[0m"
./test_list

# echo -e "\033[1;43;30m\ntest_deadlock...\033[0m"
# ./test_deadlock
