#include "EtudeStatistique1D.h"



//constructeur d'initialisation
EtudeStatistique1D::EtudeStatistique1D(int * vecteur)
{   
        vec = vecteur ; 
        vecdebut = vec;
        
}

//destructeur
EtudeStatistique1D::~EtudeStatistique1D()
{

}

//fonction qui calcule les differnet champs

/***********************************************************************************
calcule la moyenne de mon vecteur
***********************************************************************************/

float EtudeStatistique1D::calculeMoyenne()      
{
        int effectif=0;
        int moyenne=0;
        for(int i=0 ; i<=9; i++,vec++)
        {
               effectif+=*vec;
               moyenne+=*vec*i;
        }
        resetvec();
        return moyenne/effectif; 

}

/***********************************************************************************
calcule le maximum dans mon vecteur
***********************************************************************************/

float EtudeStatistique1D::calculeMode()
{
        int max=0;
        for(int i=0 ; i<=9; i++,vec++)
        {
                if( *vec > max)
                {
                        max=*vec;
                }
        }
        resetvec();
        return max; 
}

float EtudeStatistique1D::calculeMediane()
{
        float mediane ; 
        mediane =(*(vec+4)+*(vec+5))/2;

        return mediane ;
}

float EtudeStatistique1D::calculeS()
{
        
}

float EtudeStatistique1D::calculeRange()
{
        
}

float EtudeStatistique1D::calculeCV()
{
        
}

//getter de mes variable

float EtudeStatistique1D::getMoyenne()
{
        return moyenne;
}

float EtudeStatistique1D::getMediane()
{
        return mediane; 
}

float EtudeStatistique1D::getMode()
{
        return mode[0];
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


void EtudeStatistique1D::resetvec()
{
        vec=vecdebut;
}