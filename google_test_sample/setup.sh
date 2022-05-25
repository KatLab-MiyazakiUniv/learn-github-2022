#!/bin/bash

git clone https://github.com/google/googletest.git
mkdir -p ./googletest/build
cd ./googletest/build
cmake -DCMAKE_CXX_FLAGS="-std=c++11" ..
make
cd ../

sudo cp -r googlemock/include/gmock /usr/local/include/gmock
sudo cp -r googletest/include/gtest /usr/local/include/gtest
sudo cp build/lib/*.a /usr/local/lib/

cd ../

rm -rf googletest