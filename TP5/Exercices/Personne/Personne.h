#ifndef Personne_H
#define Personne_H

#include "iostream"
#include "string"

using namespace std;

enum Sexe{ INCONNU =0,MASCULIN =1,FEMININ =2 };

class Personne {

    public:
    Personne(const string numero, char nom[10], Sexe sexe);
    ~Personne();

    void AffichePersonne() const;
    string getNumero();
    string getNom();
    Sexe getSexe();

    protected:
    string a_numero;
    string a_nom;
    Sexe a_sexe;
};
#endif
