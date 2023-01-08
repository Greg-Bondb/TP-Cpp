#ifndef Carte1_H
#define Carte1_H

#include <iostream>
#include "string"

using namespace std;

namespace Carte1 {

    enum Couleur { PIQUE=0, COEUR=1, CARREAU=2, TREFLE=3 };

    class Carte {
    public:

        Carte(const Couleur couleur,const string& valeur);
        Carte(const Carte&);
        ~Carte();

        void setType(const Couleur);
        void setValeur(const string&);
        void afficher() const;
        bool equal(const Carte&) const;
        void affecter(const Carte&);
    private:
        Couleur a_couleur;
        string a_valeur;
    };
}
#endif
