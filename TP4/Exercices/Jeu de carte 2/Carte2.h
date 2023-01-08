#ifndef Carte2_H
#define Carte2_H
#include "string"
#include "iostream"
using namespace std;
namespace Carte2 {
    class Carte;
}

ostream& operator<<(ostream& os, const Carte2::Carte& dt);

namespace Carte2 {

    enum Couleur { PIQUE=0, COEUR=1, CARREAU=2, TREFLE=3 };

    class Carte {
    public:
        Carte(const Couleur couleur,const string& str);
        Carte(const Carte& carte);
        ~Carte();

        Carte& operator=(const Carte& carte);
        bool const operator==(const Carte& carte);
        bool const operator!=(const Carte& carte);
        void setType(const Couleur couleur);
        void setValeur(const string& str);
        static unsigned GetNbCreation();
        friend ostream& ::operator<<(ostream& os, const Carte& dt);


    private:
        static unsigned NbCreation ;
        string a_valeur;
        Couleur a_couleur;
    };
}
#endif
