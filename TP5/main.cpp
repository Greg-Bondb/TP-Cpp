/*! \brief code
* \author Balatre Grégory
* \file merci d'importer <iostream>, <chrono>, <thread>, et les .h pour faire fonctionner l'ensemble du TP
*/

#include <iostream>
#include <chrono>
#include <thread>
#include "main.h"
#include "Exercices/Personne/Personne.cpp"
#include "Exercices/Heritage/Heritage.cpp"
#include "Exercices/FormeGeometrique/src/AformeGeometrique.cpp"
#include "Exercices/FormeGeometrique/src/Carre.cpp"
#include "Exercices/FormeGeometrique/src/Cercle.cpp"
#include "Exercices/FormeGeometrique/src/main.cpp"
#include "Exercices/FormeGeometrique/src/Rectangle.cpp"

using namespace std;
using namespace this_thread;
using namespace chrono;

/*! Tableau du Menu */
string menu() {
    cout << "---------------------" << endl;
    cout << "0) Quitter le menu" << endl;
    cout << "1) Heritage" << endl;
    cout << "2) Forme Geometrique" << endl;
    return "---------------------";
}

/*! Fonction main */
int main() {
    Menu::execute();
}

/*! classe Menu */
void Menu::execute() {
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
            case 1 : H1();
                break;
            case 2 : Geo();
                break;
            default : cout << "Je n'ai pas compris desole, veillez reessayer :" << endl;
                break;
        }
        /*! Laisser a l'utilisateur un peu de temps pour lire la réponse d'un exercice */
        sleep_for(seconds(3));
    }
}

/*! Suppression classe Menu */
Menu::~Menu() {
    cout << "Le menu a ete detruit !" << endl;
}
