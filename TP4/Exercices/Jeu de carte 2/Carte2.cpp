/*! \brief code
* \author Balatre Grégory
*/

#include "iostream"
#include "Carte2.h"
#include "string"

using namespace std;
/*! utilisation namespace pour éviter conflit de nom de classe */
namespace Carte2 {

    unsigned Carte::NbCreation =0;

//----------------INIT--------------

    Carte::Carte(const Carte2::Couleur couleur, const string &str) : a_couleur(), a_valeur() {
        this->a_couleur = couleur;
        this->a_valeur = str;
    }

    Carte::Carte(const Carte2::Carte &carte) {
        this->a_couleur = carte.a_couleur;
        this->a_valeur = carte.a_valeur;
    }

    Carte::~Carte() {
        cout << "Destruction de la carte" << endl;
    }

//----------------METHO-----------------

    Carte &Carte::operator=(const Carte &carte) {
        this->a_valeur = carte.a_valeur;
        this->a_couleur = carte.a_couleur;
        return *this;
    }

     const bool Carte::operator==(const Carte &carte) {
        if (a_couleur == carte.a_couleur && this->a_valeur == carte.a_valeur) {
            return true;
        }
        return false;
    }

     const bool Carte::operator!=(const Carte &carte) {
        if (!Carte::operator==(carte)) {
            return true;
        }
        return false;
    }

    void Carte::setType(const Couleur couleur) {
        this->a_couleur = couleur;
    }

    void Carte::setValeur(const string &str) {
        this->a_valeur = str;
    }

    unsigned Carte::GetNbCreation() {
        return Carte::NbCreation;
    }
}
ostream& operator<<(ostream& os, const Carte2::Carte& dt)
{
    os << "Valeur = " << dt.a_valeur << endl << "Couleur = " << dt.a_couleur << " ";
    return os;
}


//-----------MAIN----------

int C2(){
    cout << endl << "Jeu de carte" <<endl << endl;
    Carte2::Carte c1(Carte2::PIQUE,"As");
    cout << c1 << endl << "--------------------------" << endl;

    Carte2::Carte c2(c1);
    cout << c2 << endl << "--------------------------" << endl;
    c2.setType(Carte2::TREFLE);
    c2.setValeur("Queen");
    cout << c2 << endl << "--------------------------" << endl;

    if ( c1!=c2) {
        cout << "is ok :-)" << endl;
    }else{
        cout << "problem bug" << endl;
    }
    cout << "--------------------------" << endl;
}