#ifndef DataSource1D_H
#define DataSource1D_H

//test
#include <iostream>
using namespace std;
#include <cstring>
#include <iostream>
#include <fstream>

class DataSource1D
{   
    private:
    //doit peut etre rajouter l'age 
        int vec1[9] ;  // objet contenant 3 vecteurs , colonne des fichier csv 
        int vec2 [9]; 
        int vec3[9]; 
        //int effectif;      // faire une methode qui calcul combien d'elt sont dans le vct 

    public:
         // constructeur 
        DataSource1D(string NomFichier);

        //methodes
        void ajouter(int * vecteur, int valeur);
        float getEffectif();
    
};
#endif

