cmake_minimum_required(VERSION 3.21)
project(TP1_Balatre)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TP1_Balatre
        main.cpp
        TP1.1.cpp TP1.1.h
        TP1.2.cpp TP1.2.h
        TP1.3.cpp TP1.3.h
        TP1.4.cpp TP1.4.h
        TP1.5.cpp TP1.5.h)
