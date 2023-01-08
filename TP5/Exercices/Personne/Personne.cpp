/*! \brief code
* \author Balatre Grégory
*/

#include "iostream"
#include "Personne.h"

using namespace std;

//----------------INIT--------------

Personne::Personne(const string numero, char *nom, Sexe sexe): a_numero(numero), a_nom(nom), a_sexe(sexe){
}

Personne::~Personne(){
    cout << "Destruction de la personne" << endl;
}

//----------------METHO-----------------

string Personne::getNom(){
    cout << "getNom :";
    return this -> a_nom;
}

string Personne::getNumero() {
    cout << "getNumero :";
    return this -> a_numero;
}

Sexe Personne::getSexe() {
    cout << "getSexe :";
    return this -> a_sexe;
}

void Personne::AffichePersonne() const {
    cout << "--------------------------" << endl << "Affichage de la classe Personne : " << endl << "Nom : " << this -> a_nom << endl << "Numero : " << this -> a_numero << endl << "Sexe : " << this -> a_sexe << endl << "--------------------------" << endl;
}

//-----------MAIN----------

int P1() {
    Personne p1("118-218","Balatre",MASCULIN);
    p1.AffichePersonne();
    cout << p1.getNom() << endl;
    cout << p1.getNumero() << endl;
    cout << p1.getSexe() << endl;
    cout << "--------------------------" << endl;
}