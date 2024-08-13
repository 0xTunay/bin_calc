#!/bin/bash

cd build || mkdir -p build && cd build
cmake ..
make
./calc_binary
cd ..