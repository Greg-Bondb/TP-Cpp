/*! \brief code
* \author Balatre Grégory
*/

#include "iostream"
#include "../inc/Carre.h"

namespace PFormeGeometrique{

    //----------------INIT--------------

    Carre::Carre(string nom, double largeur) : Rectangle(string (nom) ,largeur ,largeur) {
    }

    Carre::~Carre() {
        cout << "Destruction du carre" << endl;
    }

    //----------------METHO-----------------

    void Carre::affichage() const {
        Rectangle::affichage();
    }
}