#include "DataSource1D.h"

DataSource1D::DataSource1D()
{
    effectif=0;
    for ( int i=0;i<=10;i++)vec[i]=0;
    
}


void DataSource1D::ajouter(int valeur)
{
    cout << "(DATASOURCE) ajout d'une valeur : "<< valeur << endl;
       cout << "(DATASOURCE) valeur du vec ava,nt iteration : "<< valeur << endl;
    vec[valeur]++ ;

  //  effectif++;
    
   
    cout << "(DATASOURCE) fin ajout d'une valeur" << endl;

}

 float DataSource1D::getEffectifTotal()
 {
    return effectif; 
   
 }

 int* DataSource1D::getVecteur()
 {
     return vec ; // on retourne donc l'adresse du vecteur ( du 0 )
 }