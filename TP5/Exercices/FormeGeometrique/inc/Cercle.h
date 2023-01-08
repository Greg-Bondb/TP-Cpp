#ifndef Cercle_H
#define Cercle_H

#include "AFormeGeometrique.h"

namespace PFormeGeometrique{

    class Cercle: public AFormeGeometrique{

    public:
        Cercle(string nom, double rayon);
        double perimetre() const;
        void affichage() const;
        double surface() const;
        ~Cercle();

    private:
        double a_rayon;
    };
}

#endif

#include "iostream"
#include "AFormeGeometrique.h"
