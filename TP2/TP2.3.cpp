/*! \brief code
* \author Balatre Grégory
*/

#include <iostream>
#include <memory>

using namespace std;

typedef shared_ptr<double[]> ptrStdDouble;

void constructeur_tableau (ptrStdDouble& dd,const unsigned & taille) {
    dd = ptrStdDouble (new double[taille]{0});
}

void afficher_tableau (const ptrStdDouble& dd, const unsigned& taille) {
    cout << "-------------------------" << endl;
    if (dd != nullptr) {
        cout << "Affichage du Tableau :" << endl;
        for (int i = 0; i < taille; i++) {
            cout << "Case " << i << " = " << dd[i] << endl;
        }
    } else {
        cout << "Le Tableau a ete detruit !" << endl;
        cout << "-------------------------" << endl;
    }
}

void modifier_tableau (const ptrStdDouble& dd, const unsigned& taille, const unsigned& index, const double& valeur) {
    dd[index] = valeur;
}

void destructeur_tableau (ptrStdDouble& dd) {
    dd = nullptr;
    ptrStdDouble reset (dd);
}

const double& get_tableau(const ptrStdDouble& dd, const unsigned& taille, const unsigned& index) {
    cout << "-------------------------" << endl << "Affichage de l'index " << index << " :"<< endl << "Case " << index << " = ";
    return dd[index];

}

double& get_tableau2(ptrStdDouble& dd, const unsigned& taille, const unsigned& index)  {
    cout << "-------------------------" << endl << "modification de la value " << index << endl;
    return dd[index];
}

void TP2_3() {
    ptrStdDouble d1 = nullptr;
    unsigned t1=5;
    constructeur_tableau(d1,t1);
    afficher_tableau(d1,t1);
    modifier_tableau(d1,t1,2, 3.13589985);
    afficher_tableau(d1,t1);
    cout << get_tableau(d1,t1,2) << endl;
    get_tableau2(d1,t1,2) = 62.1;
    cout << get_tableau(d1,t1,2) << endl;
    afficher_tableau(d1,t1);
    destructeur_tableau(d1);
    afficher_tableau(d1,t1);
}