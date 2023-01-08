#ifndef Carre_H
#define Carre_H

#include "AFormeGeometrique.h"
#include "Rectangle.h"

namespace PFormeGeometrique{

    class Carre : public Rectangle{

    public:
        Carre(std::string nom, double largeur);
        void affichage() const;
        ~Carre();
    };
}

#endif



