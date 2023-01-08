cmake_minimum_required(VERSION 3.21)
project(TP2_Balatre)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TP2_Balatre
        main.cpp
        TP2.1.cpp TP2.1.h
        TP2.2.cpp TP2.2.h
        TP2.3.cpp TP2.3.h)
