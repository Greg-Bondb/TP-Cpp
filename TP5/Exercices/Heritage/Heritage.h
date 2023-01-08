#ifndef Héritage_H
#define Héritage_H

#include <vector>
#include "iostream"
#include "string"
#include "../Personne/Personne.h"

using namespace std;

class Etudiant: public Personne{

    public:
    Etudiant(const Personne& personne, vector< float > tabnote);
    ~Etudiant();

    void rentrerNote();
    void afficherNote();

    protected:
    vector< float > a_tabnote;
};
#endif
