/*! \brief code
* \author Balatre Grégory
*/

#include "iostream"
#include "../inc/AFormeGeometrique.h"

using namespace std;

//----------------INIT--------------

PFormeGeometrique::AFormeGeometrique::AFormeGeometrique(string nom) {
}

PFormeGeometrique::AFormeGeometrique::~AFormeGeometrique() {
}

//----------------METHO-----------------

string PFormeGeometrique::AFormeGeometrique::getNom() const {
    return this -> nom;
}
