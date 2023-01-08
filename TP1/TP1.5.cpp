/*! \brief code
* \author Balatre Grégory
*/
#include <iostream>
#include <random>

using namespace std;

/*! Fonction qui joue a un jeu ou il faut deviner un nombre avec l'utisateur */
void nbmystere() {
    /*! definir x > 100 pour éviter les conditions dès le lancement du code */
    int x = 101;
    int i = 0;
    string rep;
    random_device rd;
    mt19937 gen(rd());
    /*! nombre aléatoire entre 1 et 100 */
    uniform_int_distribution<int> dist(1, 100);
    /*! nombre aléatoire dans la limite */
    int limit = dist(gen);
    uniform_int_distribution<int> result(-limit, limit);
    int numb = result(gen);
    cout << "Ce programme est un jeu dont le but est de trouver un nombre choisi." << endl;
    cout << "par la machine compris entre -N et N (avec N max = 100)" << endl;
    cout << "Le nombre a trouver est compris entre " << -limit << " et "  << limit << endl;
    /*! tant que l'input n'est pas égal au nombre */
    while (x != numb) {
        i++;
        cout << "Saisir un nombre x :" << endl;
        cin >> x;
        /*! conditions */
        if (x > numb) {
            cout << "Trop grand :(" << endl;
        } else if (x < numb){
            cout << "Trop petit :(" << endl;
        }
    }
    cout << "Bravo le chiffre est bien " << x  << ", vous avez gagne en " << i << " coups" << endl;
    cout << "Voulez vous refaire une partie o[O] ? N" << endl;
    cin >> rep;
    /*! relancer la partie */
    if (rep == "o" || rep == "O") {
        nbmystere();
    } else {
        cout << "Merci d'avoir joue !" << endl;
    }
}