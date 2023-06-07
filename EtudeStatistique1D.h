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
        int *vec ; 
        int *vecdebut;

         //variable moyenne
        float moyenne;
        float mediane;
        float mode[2];
        //varibale dispersion
        float ecart_type;
        float etendue;
        float coef_var;

    public:
    

        // constructeur et destructeur
        EtudeStatistique1D(DataSource1D* data);
        ~EtudeStatistique1D();

        void resetvec();
        //fonction de calcule qui calcule sur base du vecteur

        float calculeMoyenne();
        float calculeMediane ();
        float calculeMode();
        float calculeS(); // ecart type 
        float calculeRange(); //etendue 
        float calculeCV(); // coef de variation 

        float getMoyenne();
        float getMediane();
        float getMode();
        float getecartType();
        float getEtendue();
        float getCoef_var();
        void affiche() ; 
        
};
#endif

