cmake_minimum_required(VERSION 3.21)
project(TP4_Balatre)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TP4_Balatre
        "Jeu de carte 1/Carte1.cpp" "Jeu de carte 1/Carte1.h"
        "Jeu de carte 2/Carte2.cpp" "Jeu de carte 2/Carte2.h"
        "Personne/Personne.cpp" "Personne/Personne.h")
