/*! \brief code
* \author Balatre Grégory
*/
#include <iostream>

using namespace std;

/*! Fonction Factorielle */
int factorielle() {
    int x;
    cout << "Ce programme renvoie la factorielle de x." << endl;
    cout << "Saisir un nombre x :" << endl;
    cin >> x;
    int facto = 1;
    for (int i = 1; i <= x; i++) {
        /*! multiplie tous les index jusqu'a x */
        facto = facto * i;
    }
    cout << "\nLa factorielle de " << x << " est egale a " << facto << endl;
}