#!/bin/bash

# download dependencies
git clone --recursive https://github.com/mlivesu/cinolib.git

# compile the software
EXE=./cps
CINOLIB_PATH=./cinolib
CINOLIB_HEADERS=$CINOLIB_PATH/include
EIGEN_HEADERS=$CINOLIB_PATH/external/eigen
g++ -std=c++11 -O3 -I$CINOLIB_HEADERS -I$EIGEN_HEADERS main.cpp -o$EXE

# batch run on all meshes shown in figure 7 in the paper
for OBJ in `find *.obj`
do
   ./$EXE $OBJ
done
