/*! \brief code
* \author Balatre Grégory
*/
#include <iostream>

using namespace std;

/*! Fonction gère les notes de l'utilisateur */
float note(int i){
    float a;
    cout << "Veuillez entrer la note numero " << i << " :" << endl;
    cin >> a;
    /*! tant que la note < 0 ou > 20 */
    while ( 0 > a || a > 20 ) {
        cout << "(note non valide) Veuillez entrer la note numero " << i << " :" << endl;
        cin >> a;
    }
    return a;
}

/*! Fonction qui calcule la moyenne, la note max et min */
void BF() {
    int x;
    int i;
    float nb;
    float max = 0;
    float min = 20;
    float moy;
    cout << "Ce programme demande a l'utilisateur de saisir un nombre x de notes" << endl;
    cout << "puis il affiche leurs moyenne ainsi la note minimale et la note maximale." << endl;
    cout << "Saisir un nombre x :" << endl;
    cin >> x;
    /*! Saisir au moins une note */
    while (x <= 0) {
        cout << "Saisir un nombre x > 0 :" << endl;
        cin >> x;
    }
    for (i = 0; i < x; i++) {
        nb = note(i + 1);
        /*! enregister la moyenne */
        moy = moy + nb;
        /*! enregister le maximum */
        if (max < nb) {
            max = nb;
        }
        /*! enregister le minimum */
        if (min > nb) {
            min = nb;
        }
    }
    cout << "La moyenne des notes est de " << moy / float(x) << "/20" << endl;
    cout << "La note minimale est de " << min << "/20" << endl;
    cout << "La note maximale est de " << max << "/20" << endl;
}