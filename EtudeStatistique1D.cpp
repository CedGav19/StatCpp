#include "EtudeStatistique1D.h"



//constructeur d'initialisation
EtudeStatistique1D::EtudeStatistique1D(int vec)
{   
    moyenne = calculeMoyenne(vec);
}

//destructeur
EtudeStatistique1D::~EtudeStatistique1D()
{

}

//fonction qui calcule les differnet champs

/***********************************************************************************
calcule la moyenne de mon vecteur
***********************************************************************************/

float EtudeStatistique1D::calculeMoyenne(int vec)      
{
        /*int eff = vec.getEffectif();

        for(int somme=0,int i=0 ; i < eff ; i++)
        {
              somme = somme + vec.vecteur[i]
        }

        return moyenne = somme/eff;*/
}

/***********************************************************************************
calcule le maximum dans mon vecteur
***********************************************************************************/

float EtudeStatistique1D::calculeMode(int vec)
{
        /*int eff = vec.getEffectif();
        int max=0;

        for(int i=0 ; i < eff ; i++)
        {
              if(vec.vecteur[i] > max)
              {
                      max=vec.vecteur[i];
              }
        }

        return max; */
}

float EtudeStatistique1D::calculeMediane(int vec)
{
        
}

float EtudeStatistique1D::calculeS(int vec)
{
        
}

float EtudeStatistique1D::calculeRange(int vec)
{
        
}

float EtudeStatistique1D::calculeCV(int vec)
{
        
}

//getter de mes variable

float EtudeStatistique1D::getMoyenne()
{

}

float EtudeStatistique1D::getMediane()
{

}

float EtudeStatistique1D::getMode()
{

}

float EtudeStatistique1D::getS()
{

}

float EtudeStatistique1D::getRange()
{

}

float EtudeStatistique1D::getCV()
{

}