#ifndef Echantillon_H
#define Echantillon_H

#include <string>
#include <iostream>
using namespace std;
#include <cstring>
#include <iostream>
#include <fstream>
#include "DataSource1D.h"

class Echantillon
{   
    //SERTA  RECUP LES INFOS D'une seule colonne 
    private:
        DataSource1D *data ;
        

    public:

        DataSource1D* getData() const;
        Echantillon(int colonne ); 

    
    
};
#endif

