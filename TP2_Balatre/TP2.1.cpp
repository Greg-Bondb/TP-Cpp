/*! \brief code
* \author Balatre Grégory
*/

#include <iostream>
#include <random>

using namespace std;

int destructeur(const int * pint) {
    pint = nullptr;
    delete pint;
}

int constructeur(int * pint) {
    int x = 150;
    pint = &x;
    cout << "\nNouvelle valeur : " << * pint << endl;
    destructeur(pint);
}

int affiche() {
    string rep;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100);
    /*! déclare entier */
    int entier = dist(gen);
    cout << "\nNombre aleatoire choisi (entre 1 et 100) : " << entier << endl;
    int * pint = new int;
    pint = &entier;
    cout << "Affichage du Pointeur : " << pint << endl << "Affichage de l'Adresse : " << &pint << endl << "Affichage de la Valeur : " << *pint << endl;
    constructeur(pint);
}