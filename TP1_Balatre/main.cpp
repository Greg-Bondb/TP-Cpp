/*! \brief code
* \author Balatre Grégory
* \file merci d'importer <iostream>, <chrono>, <thread>, <random>, et les .h pour faire fonctionner l'ensemble du TP
*/
#include <iostream>
#include <chrono>
#include <thread>
#include "TP1.1.h"
#include "TP1.2.h"
#include "TP1.3.h"
#include "TP1.4.h"
#include "TP1.5.h"

using namespace std;
using namespace this_thread; // sleep_for, sleep_until
using namespace chrono; // nanoseconds, system_clock, seconds

/*! Tableau du Menu */
string menu() {
    cout << "---------------------" << endl;
    cout << "0) Quitter le menu" << endl;
    cout << "1) Pair et Somme" << endl;
    cout << "2) Factorielle" << endl;
    cout << "3) Nombre fort" << endl;
    cout << "4) Moyenne, Minimum, Maximum" << endl;
    cout << "5) Nombre mystere" << endl;
    return "---------------------";
}

/*! Fonction Menu */
int main() {
    int x = 1;
    while (x != 0) {
        cout << "\nBonjour ! Bienvenu dans le menu o_O"  << endl << endl;
        cout << "Voici les options de ce dernier :"  << endl << menu() << endl << endl;
        cout << "Votre choix :";
        cin >> x;
        /*! Choix de l'utilisateur */
        switch (x) {
            case 0 : cout << "Merci, au revoir" << endl;
                break;
            case 1 : nbpair(); nbsomme();
                break;
            case 2 : factorielle();
                break;
            case 3 : ressource();
                break;
            case 4 : BF();
                break;
            case 5 : nbmystere();
                break;
            default : cout << "Je n'ai pas compris désolé." << endl;
                break;
        }
        /*! Laisser a l'utilisateur un peu de temps pour lire la réponse d'un exercice */
        sleep_for(seconds(3));
    }
}