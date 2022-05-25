#!/bin/bash

g++ test/*.cpp modules/*.cpp -pthread -lgtest_main -lgtest -o gtest
./gtest
rm gtest