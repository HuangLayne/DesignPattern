#!/bin/bash

# 删除 a.out 文件
find . -type f -name "*a.out" | xargs rm -rf
# 删除后缀为.class 的文件
find . -type f -name "*.class" | xargs rm -rf
# 删除后缀为.dSYM 的文件夹
find . -type d -name "*.dSYM" | xargs rm -rf
# 删除后缀为.DS_Store 的文件夹
find . -type d -name "*.DS_Store" | xargs rm -rf
find . -type f -name "tempCodeRunnerFile" | xargs rm -rf
find . -type d -name "*build" | xargs rm -rf
