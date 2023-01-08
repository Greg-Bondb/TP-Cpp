/*! \brief code
* \author Balatre Grégory
*/

#include "iostream"
#include "../inc/Rectangle.h"

using namespace std;

namespace PFormeGeometrique{

    //----------------INIT--------------

    Rectangle::Rectangle(std::string nom, const double longueur, const double largeur): AFormeGeometrique(nom), a_longueur(longueur), a_largeur(largeur){
        cout << "*RECTANGLE/CARRE*" << endl;
    }

    Rectangle::~Rectangle() {
        cout << "Rectangle est detruit" <<endl;
    }

    //----------------METHO-----------------

    double Rectangle::perimetre() const{
        return ((a_longueur + a_largeur)*2);
    }

    double Rectangle::surface() const{
        return (a_longueur * a_largeur);
    }

    void Rectangle::affichage() const{
        cout << "La longueur : " << this -> a_longueur << endl;
        cout << "La Largeur : " << this -> a_largeur << endl;
        cout << "Le perimetre : " << this -> perimetre() << endl;
        cout << "La surface : " << this -> surface() << endl;
        cout << "----------------------" << endl;
    }
}