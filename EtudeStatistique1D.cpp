#include "EtudeStatistique1D.h"



//constructeur d'initialisation
//REMPLACER PAR UN OBJET DATASURCE1D
EtudeStatistique1D::EtudeStatistique1D(  DataSource1D  data)  
{   
          cout <<"(Etudestat) debut du constructeur" <<endl;
        vec = data.getVecteur();
         cout<<"(MAIN) verif de la lectur des donness  "<<endl;
       
        vecdebut = vec;
         moyenne= calculeMoyenne();
         mediane= calculeMediane();
         mode[0]=calculeMode();
         ecart_type= calculeS();
         etendue = calculeRange();
         coef_var = calculeCV();
         

        affiche();
        //calcul plus appel affiche
        cout <<"(Etudestat) fin du constructeur" <<endl;
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
        //return moyenne/effectif; 
        return 0;

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
        //return max;
        return 0 ; 
}

float EtudeStatistique1D::calculeMediane()
{
        /*float mediane ; 
        mediane =(*(vec+4)+*(vec+5))/2;
*/
        return 0 ;
}

float EtudeStatistique1D::calculeS()
{
        return 0 ;
}

float EtudeStatistique1D::calculeRange()
{
        return 0 ;
}

float EtudeStatistique1D::calculeCV()
{
        return 0 ;
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

float EtudeStatistique1D::getecartType()
{
        return ecart_type ;
}

float EtudeStatistique1D::getEtendue()
{
        return etendue;
}

float EtudeStatistique1D::getCoef_var()
{
        return coef_var ; 
}


void EtudeStatistique1D::resetvec()
{
        vec=vecdebut;
}

void EtudeStatistique1D::affiche()
{
        cout<<("la moyenne est de : ") << moyenne << endl ;
        cout<<("la mediane est de : ") << mediane << endl ;
        cout<<("le mode est de : ") << mode[0] << endl ;
        cout<<("l'ecart type est de : ") << ecart_type << endl ;
        cout<<("l'etendue est de : ") << etendue << endl ;
        cout<<("le coefficient de variation est de : ") << coef_var << endl ;
}