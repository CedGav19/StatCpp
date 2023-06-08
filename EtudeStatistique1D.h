#ifndef EtudeStatistique1D_H
#define EtudeStatistique1D_H


#include <iostream>
using namespace std;
#include <cstring>
#include <iostream>
#include <fstream>
#include <cmath>
#include "DataSource1D.h"


class EtudeStatistique1D
{   
    private:
    

         //variable moyenne
        float moyenne;
        float mediane;
        float mode[3];
        //varibale dispersion
        float ecart_type;
        float etendue;
        float coef_var;

    public:
    

        // constructeur et destructeur
        EtudeStatistique1D(DataSource1D* data);
        ~EtudeStatistique1D();

        //fonction de calcule qui calcule sur base du vecteur

        void calculeMoyenne(DataSource1D* data);
        void calculeMediane (DataSource1D* data);
        void calculeMode(DataSource1D* data);
        void calculeS(DataSource1D* data); // ecart type 
        void calculeRange(DataSource1D* data); //etendue 
        void calculeCV(DataSource1D* data); // coef de variation 

        float getMoyenne();
        float getMediane();
        float getMode();
        float getecartType();
        float getEtendue();
        float getCoef_var();
        void affiche() ; 
        
};
#endif

