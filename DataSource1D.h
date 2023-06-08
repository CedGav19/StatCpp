#ifndef DataSource1D_H
#define DataSource1D_H

#include <iostream>
using namespace std;
#include <cstring>
#include <iostream>
#include <fstream>

class DataSource1D
{   
    private:
     
        int vec[9] ;
        int effectif ; 
     

    public:
         // constructeur 
        DataSource1D(int colonne);
        DataSource1D();//remplis le vec avec des 0 

        //methodes
        void ajouter(int valeur);
        float getEffectifTotal();
        int * getVecteur();
    
};
#endif

