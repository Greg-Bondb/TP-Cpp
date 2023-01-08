#ifndef IFormeGeometrique_H
#define IFormeGeometrique_H

#ifdef ISDEBUG
#include <iostream>
#define DEBUG(msg) { \
cerr<< " Debug(" <<__FILE__ <<", "<<__LINE__ <<") " << msg << endl; \
cerr.flush(); }
#else
#define DEBUG(msg)
#endif

#include "AFormeGeometrique.h"

using namespace std;

namespace PFormeGeometrique {

    class IFormeGeometrique {

    public:
        virtual double perimetre() const = 0;
        virtual void affichage() const = 0;
        virtual string getNom() const = 0;
        virtual double surface() const = 0;
        virtual ~IFormeGeometrique() { DEBUG(" ~IFormeGeometrique()"); }
    };
}

#endif