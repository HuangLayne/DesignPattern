#!/bin/bash
clear
set -e
set +x

# 使用前：
# brew install cppcheck

THREAD_COUNT=
if which nproc >/dev/null
then
    THREAD_COUNT=-j`nproc`
elif [ "$UNAME_S" = "Darwin" ] && which sysctl >/dev/null
then
    THREAD_COUNT=-j`sysctl -n machdep.cpu.thread_count`
fi

function static_check() {
    cppcheck --enable=warning,performance --inconclusive $THREAD_COUNT $1
}

# 删除build文件夹
find . -type d -name "*build" | xargs rm -rf

if [ $# -eq 0 ] ; then
    static_check $(pwd)/C
    static_check $(pwd)/C++
else
    for i in $@; do
        static_check $(pwd)/$i
    done
fi
