/*! \brief code
* \author Balatre Grégory
*/
#ifndef _UNICODE
#define _UNICODE
#endif
#ifndef UNICODE
#define UNICODE
#endif

#include "../inc/Cercle.h"
#include "../inc/Carre.h"

using namespace PFormeGeometrique;

int Geo() {
    Cercle c("C10",10.);
    c.affichage();
    c.perimetre();
    c.surface();
    Rectangle r("R10",10.,5.0);
    r.affichage();
    r.perimetre();
    r.surface();
    Carre ca("CA10",10.);
    ca.affichage();
    ca.perimetre();
    ca.surface();
    IFormeGeometrique *f = new Carre("CARR002",12);
    f->affichage();
    delete f;f=NULL;
    IFormeGeometrique &f2 = ca;
    f2.affichage();
    return 0;
}