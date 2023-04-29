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
        
        int vecteur[9];
        int effectif;

    public:
         // constructeur 
        DataSource1D(string NomFichier);

        //methodes
        void ajouter(int valeur);
        float getEffectif();
    
};
#endif

