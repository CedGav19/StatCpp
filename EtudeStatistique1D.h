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
        float mode;
        //varibale dispersion
        float ecart_type;
        float etendue;
        float coef_var;

    public:

        // constructeur et destructeur
        EtudeStatistique1D(DataSource1D vec);
        EtudeStatistique1D();
        ~EtudeStatistique1D();

        //fonction de calcule qui calcule sur base du vecteur

        float calculeMoyenne(DataSource1D vec);
        float calculeMediane(DataSource1D vec);
        float calculeMode(DataSource1D vec);
        float calculeS(DataSource1D vec);
        float calculeRange(DataSource1D vec);
        float calculeCV(DataSource1D vec);

        //variable moyenne
        float  getMoyenne();
        float getMediane();
        float getMode();
        //varibale dispersion
        float etS();
        float getRange();
        float getCV();
    
};
#endif

