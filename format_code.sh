#!/bin/bash

function format_file() {
    file=$1
    if [ "${file##*.}"x = "h"x ] || [ "${file##*.}"x = "c"x ] || [ "${file##*.}"x = "cpp"x ] || [ "${file##*.}"x = "m"x ]; then
        clang-format -style="{BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 120}" -i $file
    fi
}

function format_directorie() {
    cd $1

    for file in $(find . -type f -name '*.h' -or -name '*.c' -or -name '*.cpp' -or -name '*.m')
    do
        clang-format -style="{BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 120}" -i $file
    done

    cd -
}

function format() {
    if [ -d $1 ]; then
        format_directorie $1
    elif [ -f $1 ]; then
        format_file $1
    fi
}

if [ $# -eq 0 ] ; then
    format $(pwd)/C
    format $(pwd)/C++
else
    for i in $@; do
        format $(pwd)/$i
    done
fi
