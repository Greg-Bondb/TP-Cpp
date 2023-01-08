/*! \brief code
* \author Balatre Grégory
*/

#include "iostream"
#include "cmath"
#include "../inc/Cercle.h"

using namespace std;

namespace PFormeGeometrique {

    //----------------INIT--------------

    Cercle::Cercle(string name, double rayon): AFormeGeometrique(std::move(name)) ,a_rayon(){
        cout << "*CERCLE*" << endl;
        this -> a_rayon = rayon;
    }

    Cercle::~Cercle() {
        cout << "Destruction du cercle" << endl;
    }

    //----------------METHO-----------------

    double Cercle::perimetre() const {
        return 2 * M_PI * this -> a_rayon;
    }

    void Cercle::affichage() const {
        cout << "Rayon de " << this -> getNom() << " : " << this -> a_rayon << endl;
        cout << "Perimetre de " << this -> getNom() << " : " << this -> perimetre() << endl;
        cout << "Surface de " << this -> getNom() << " : " << this -> surface() << endl;
        cout << "----------------------" << endl;
    }

    double Cercle::surface() const {
        return M_PI* this -> a_rayon * this -> a_rayon;
    }
}