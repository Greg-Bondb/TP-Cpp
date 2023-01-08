/*! \brief code
* \author Balatre Grégory
*/

#include <iostream>
#include "string"
#include "Carte1.h"

using namespace std;
using namespace Carte1;

//----------------INIT--------------

Carte::Carte(Couleur couleur, const string& valeur):
        a_couleur(couleur),a_valeur(valeur) {
}

Carte::Carte(const Carte & carte):
        a_couleur(carte.a_couleur), a_valeur(carte.a_valeur) {
}

Carte::~Carte(){
    cout << "Destruction de la carte" << endl;
}

//----------------METHO-----------------

void Carte::setType(const Couleur couleur){
    this -> a_couleur = couleur;
}

void Carte::setValeur(const string& str) {
    this -> a_valeur = str;
}

void Carte::afficher() const {
    cout << "Couleur :" << this->a_couleur << " Valeur :" << this->a_valeur << endl;
}

bool Carte::equal(const Carte & carte) const {
    if (a_valeur == carte.a_valeur && a_couleur == carte.a_couleur)  {
        return true;
    } else {
        return false;
    }
}

void Carte::affecter(const Carte & carte) {
    a_valeur = carte.a_valeur;
    a_couleur = carte.a_couleur;
}


//-----------MAIN----------

int C1() {
    cout << "Jeu de carte" << endl <<"--------------------------" << endl;
    Carte c1(PIQUE ,  "AS");
    cout << "Affichage de c1 :" << endl;
    c1.afficher();
    cout << "--------------------------" << endl;
    Carte c2(c1);
    cout << "Affichage de c2 (copie de c1) :" << endl;
    c2.afficher();
    cout << "--------------------------" << endl;
    cout << "Changement de c2 :" << endl;
    c2.setType(TREFLE);
    c2.setValeur("Queen");
    c2.afficher();
    cout << "--------------------------" << endl;
    Carte c3(PIQUE, "2");
    c2.affecter(c3);
    cout << "Affichage c2 (copie de c3) :" << endl;
    c2.afficher();
    cout << "--------------------------" << endl;
    cout << "Affichage de c3 :" << endl;
    c3.afficher();
    cout << "--------------------------" << endl;

    if (! c1.equal(c2)) {
        cout << "is ok :-)" << endl;
    } else {
        cerr << "problem bug" << endl;
        c1.afficher();
        c2.afficher();
    }
    cout << "--------------------------" << endl;
    return 0;
}