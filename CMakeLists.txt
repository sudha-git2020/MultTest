cmake_minimum_required(VERSION 2.8.9)
project (multtest)
add_executable(multtest multtest.cpp)
add_test(mytest, multtest)
