#!/bin/bash
cd "$(dirname "$1")"
filename=$(basename "$1" .cpp)
/usr/bin/clang++ -g "$filename.cpp" -o "$filename"
"./$filename"
