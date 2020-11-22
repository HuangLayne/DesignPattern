#!/bin/bash
clear
rm -rf build_xcode
cmake . -GXcode -B build_xcode "-DCMAKE_OSX_ARCHITECTURES=x86_64"
open build_xcode/DesignPattern.xcodeproj/
