#!/bin/bash

rm `find . -type f ! -name "*.cpp" -type f ! -name "*.sh"`
qmake-qt4 -project -o hello.pro 
qmake-qt4 hello.pro
make

