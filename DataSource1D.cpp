#include "DataSource1D.h"

DataSource1D::DataSource1D()
{
    effectif=0;
    for ( int i=0;i<=10;i++)vec[i]=0;
    
}


void DataSource1D::ajouter(int valeur)
{
    vec[valeur]++ ;

  effectif++;
    
   

}

 float DataSource1D::getEffectifTotal()
 {
    return effectif; 
   
 }

 int* DataSource1D::getVecteur()
 {
     return vec ; // on retourne donc l'adresse du vecteur ( du 0 )
 }

