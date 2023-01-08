#ifndef AFormeGeometrique_H
#define AFormeGeometrique_H

#include "iostream"
#include "string"
#include "IFormeGeometrique.h"

using namespace std;

namespace PFormeGeometrique{

    class AFormeGeometrique: public IFormeGeometrique {
        public:
            AFormeGeometrique(string nom);
            string getNom() const override;
            ~AFormeGeometrique();
        private:
            string nom;
    };
}

#endif