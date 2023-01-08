cmake_minimum_required(VERSION 3.21)
project(TP5_Balatre)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TP5_Balatre
        "Personne/Personne.cpp" "Personne/Personne.h"
        "Heritage/Heritage.cpp" "Heritage/Heritage.h"
        "FormeGeometrique/inc/AFormeGeometrique.h"  "FormeGeometrique/src/AformeGeometrique.cpp"
        "FormeGeometrique/inc/Carre.h" "FormeGeometrique/src/Carre.cpp"
        "FormeGeometrique/inc/Cercle.h" "FormeGeometrique/src/Cercle.cpp"
        "FormeGeometrique/inc/IFormeGeometrique.h" "FormeGeometrique/src/main.cpp"
        "FormeGeometrique/inc/Rectangle.h" "FormeGeometrique/src/Rectangle.cpp")
