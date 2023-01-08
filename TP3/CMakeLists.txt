cmake_minimum_required(VERSION 3.21)
project(TP3_Balatre)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TP3_Balatre
        main.cpp
        Exercices/TP3.1.cpp Exercices/TP3.1.h
        Exercices/TP3.2.cpp Exercices/TP3.2.h)
