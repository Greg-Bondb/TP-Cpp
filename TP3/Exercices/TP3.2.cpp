/*! \brief code
* \author Balatre Grégory
*/

#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace this_thread;
using namespace chrono;

enum Sexe { INCONNU=0, MASCULIN=1, FEMININ=2 };

struct Personne {
    int numero;
    char nom[10];
    Sexe sexe;
};

typedef Personne* point;

void initialiser_personne(point& str) {
    cout << " Entrez un numero : ";
    cin >> (*str).numero;
    cout << "Entrer un nom : ";
    cin >> (*str).nom;
    int x = 4;
    while (x < 0 || x > 2) {
        cout << "Entrer votre sexe (0:INCONNU, 1:MASCULIN, 2:FEMININ) : ";
        cin >> x;
        switch (x) {
            case 0 : (*str).sexe = INCONNU;
                break;
            case 1 : (*str).sexe = MASCULIN;
                break;
            case 2 : (*str).sexe = FEMININ;
                break;
            default : cout << "Je n'ai pas compris desole." << endl;
                break;
        }
    }
    cout << endl;
}

void creer_personne(point& str){
    cout << "| Commencons par creer une personne |" << endl;
    str = new Personne;
}

void detruire_personne(point& str) {
    str = nullptr;
    delete [] str;
    cout << "La personne a ete detruite !" << endl;
}

void afficher_personne(point& str) {
    cout << "Affichage de la Personne :" << endl << "---------------------" << endl;
    cout << "Nom : " << (*str).nom << endl;
    cout << "Numero : " << (*str).numero << endl;
    cout << "Sexe : " << (*str).sexe << endl;
    cout << "---------------------" << endl;
    sleep_for(seconds (2));
}

void nom_personne(point& str) {
    cout << "Nom : " << (*str).nom << endl;
    cout << "---------------------" << endl;
    sleep_for(seconds (2));
}

void sexe_personne(point& str) {
    cout << "Sexe : " << (*str).sexe << endl;
    cout << "---------------------" << endl;
    sleep_for(seconds (2));
}

void numero_personne(point& str) {
    cout << "Numero : " << (*str).numero << endl;
    cout << "---------------------" << endl;
    sleep_for(seconds (2));
}

void test_fonction() {
    point str = nullptr;
    creer_personne(str);
    initialiser_personne(str);
    afficher_personne(str);
    nom_personne(str);
    sexe_personne(str);
    numero_personne(str);
    detruire_personne(str);
}