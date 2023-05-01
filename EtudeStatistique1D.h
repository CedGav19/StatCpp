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

    public:

        // constructeur et destructeur
        EtudeStatistique1D(int vec);
        ~EtudeStatistique1D();

        //fonction de calcule qui calcule sur base du vecteur

        float calculeMoyenne(int vec);
        float calculeMediane(int vec);
        float calculeMode(int vec);
        float calculeS(int vec);
        float calculeRange(int vec);
        float calculeCV(int vec);

        //variable moyenne
        float getMoyenne();
        float getMediane();
        float getMode();
        //varibale dispersion
        float getS();
        float getRange();
        float getCV();
    
};
#endif

