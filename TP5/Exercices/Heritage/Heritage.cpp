/*! \brief code
* \author Balatre Grégory
*/

#include "iostream"
#include <cmath>
#include "Heritage.h"

using namespace std;

//----------------INIT--------------

Etudiant::Etudiant(const Personne &personne, std::vector<float> tabnote):Personne(personne),a_tabnote() {
    this->a_tabnote = a_tabnote;
}

Etudiant::~Etudiant(){
    cout << "Destruction de l'Etudiant" << endl;
}

//----------------METHO--------------

void Etudiant::rentrerNote() {
    int x;
    cout << "Saisir un nombre x de note :" << endl;
    while (!(cin >> x)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Vous n'avez pas choisit un nombre !" << endl;
        cout << "Saisir un nombre x de note :" << endl;
    }
    for (int i = 1; i <= x; i++){
        float y;
        cout << "Saisir la note numero " << i << " :" << endl;
        while (!(cin >> y)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Vous n'avez pas choisit un nombre !" << endl;
            cout << "Saisir la note numero " << i << " :" << endl;
        }
        this -> a_tabnote.push_back(y);
    }
}

void Etudiant::afficherNote() {
    cout << "afficherNote :" <<  endl;
    float x = this -> a_tabnote[0];
    float y = x;
    float z = y;
    for (int i = 1; i < a_tabnote.size(); i++) {
        z += a_tabnote[i];
        if (x < this -> a_tabnote[i]) {
            x = this -> a_tabnote[i];
        }
        if (y > this -> a_tabnote[i]) {
            y = this -> a_tabnote[i];
        }
        if (i == a_tabnote.size()-1) {
            z = round(((z/a_tabnote.size())*100))/100;
        }
        if (isdigit(int(a_tabnote[i]))) {
            cout<<"Correct"<<endl;
        }
    }
    cout << "La moyenne des notes est de : " << z << endl << "La plus grande note est : " << x << endl << "La plus petite note est : " << y << endl;
}

//----------------MAIN--------------

void H1() {
    vector< float > a_tabnote;
    Personne p1("118-218","Balatre",MASCULIN);
    Etudiant p2(p1, a_tabnote);
    p2.rentrerNote();
    p2.afficherNote();
    cout << "--------------------------" << endl;
}
