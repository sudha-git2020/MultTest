cmake_minimum_required(VERSION 2.8.9)
project (mult)
add_executable(mult mult.cpp)
add_test(mytest, mult)
