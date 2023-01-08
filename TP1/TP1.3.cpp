/*! \brief code
* \author Balatre Grégory
*/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int somme;

/*! Fonction Factorielle */
void facto(int nb) {
    int facto = 1;
    for (int i = 1; i <= nb; i++) {
        facto = facto * i;
    }
    somme += facto;
}

/*! Fonction qui vérifie si un nombre est fort */
void ressource(){
    string x;
    cout << "Ce programme verifie si un nombre x est fort ou non." << endl;
    cout << "Saisir un nombre x :" << endl;
    cin >> x;
    string val = x;
    for(char i : val) {
        /*! récupère un int dans un string */
        stringstream str;
        int nb;
        str << i;
        str >> nb;
        facto(nb);
    }
    /*! Réponse */
    if (to_string(somme) == x) {
        cout << "Ce nombre est fort" << endl;
    } else {
        cout << "Ce nombre n'est pas fort" << endl;
    }
}