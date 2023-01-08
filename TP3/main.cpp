/*! \brief code
* \author Balatre Grégory
* \file merci d'importer <iostream>, <chrono>, <thread>, <random>, et les .h pour faire fonctionner l'ensemble du TP
*/

#include <iostream>
#include <chrono>
#include <thread>
#include "Exercices/TP3.1.h"
#include "Exercices/TP3.2.h"

using namespace std;
using namespace this_thread;
using namespace chrono;

/*! Tableau du Menu */
string menu() {
    cout << "---------------------" << endl;
    cout << "0) Quitter le menu" << endl;
    cout << "1) Macro" << endl;
    cout << "2) Personne" << endl;
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
            case 1 : Macro();
                break;
            case 2 : test_fonction();
                break;
            default : cout << "Je n'ai pas compris désolé." << endl;
                break;
        }
        /*! Laisser a l'utilisateur un peu de temps pour lire la réponse d'un exercice */
        sleep_for(seconds(3));
    }
}