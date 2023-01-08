/*! \brief code
* \author Balatre Grégory
*/
#include <iostream>

using namespace std;

/*! Fonction Pair */
int nbpair() {
    int x;
    cout << "Ce premier programme renvoie tous les nombres pairs de 1 a x."  << endl;
    cout << "Saisir un nombre x :" << endl;
    cin >> x;
    cout << "Les nombres pairs de 1 a " << x << " sont (boucle for) : ";
    for (int i=1;i<=x;i++) {
        /*! si l'index est pair alors afficher */
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << "\nLes nombres pairs de 1 a " << x << " sont (boucle while) : ";
    int i = 1;
    while (i <= x) {
        /*! si l'index est pair alors afficher */
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }
}

/*! Fonction Somme */
int nbsomme() {
    int x;
    cout << "\n\nLe second programme renvoie la somme de tous les nombres pairs entre 1 et x."  << endl;
    cout << "Saisir un nombre x :" << endl;
    cin >> x;
    cout << "la somme des nombres pairs de 1 a " << x << " est de (boucle for): ";
    int somme = 0;
    for (int i=1;i<=x;i++) {
        /*! si l'index est pair alors ajouter i a somme */
        if (i % 2 == 0) {
            somme += i;
        }
    }
    cout << somme << endl;
    cout << "la somme des nombres pairs de 1 a " << x << " est de (boucle while): ";

    somme = 0;
    int i = 0;
    while (i <= x) {
        /*! si l'index est pair alors ajouter i a somme */
        if (i % 2 == 0) {
            somme += i;
        }
        i++;
    }
    cout << somme << endl;
}