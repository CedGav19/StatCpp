#ifndef EtudeStatistique1D_H
#define EtudeStatistique1D_H


#include <iostream>
using namespace std;
#include <cstring>
#include <iostream>
#include <fstream>
#include "DataSource1D.h"


class EtudeStatistique1D
{   
    private:
        //variable moyenne
        float moyenne;
        float mediane;
        float mode[2];
        //varibale dispersion
        float ecart_type;
        float etendue;
        float coef_var;
        
        int *vec ; 
        int *vecdebut;

    public:

        // constructeur et destructeur
        EtudeStatistique1D(DataSource1D data);
        ~EtudeStatistique1D();

        void resetvec();
        //fonction de calcule qui calcule sur base du vecteur

        float calculeMoyenne();
        float calculeMediane ();
        float calculeMode();
        float calculeS();
        float calculeRange();
        float calculeCV();

        //variable moyenne
        float getMoyenne();
        float getMediane();
        float getMode();
        //varibale dispersion
        float getS();
        float getRange();
        float getCV();

        void affiche() ; 
        
};
#endif

