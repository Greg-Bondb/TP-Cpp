#ifndef Rectangle_H
#define Rectangle_H

#include "AFormeGeometrique.h"

namespace PFormeGeometrique{

    class Rectangle: public AFormeGeometrique {

    public:
        Rectangle(std::string nom ,const double longueur, const double largeur);
        double perimetre() const;
        void affichage() const;
        double surface() const;
        ~Rectangle();

    private:
        double a_longueur;
        double a_largeur;
    };
}

#endif
