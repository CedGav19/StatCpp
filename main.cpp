#include "DataSource1D.h"
#include"EtudeStatistique1D.h"
#include <cstring>
#include <iostream>
#include <fstream>
int main() 
{
    // serie de test 
    printf("test de etudeStatistique 1D \n ");
    int vecteur[9];
    int i =0;
    for( i=1 ; i<=10; i++)
    {
        vecteur[i-1]=i;
    }
    printf("vecteur : \n");
    for( i=0 ; i<=9; i++)
    {
        printf("vec[%d] = %d\n",i,vecteur[i]);
    }
    printf("\n");
    EtudeStatistique1D ES1(vecteur) ; 
    printf(" le mode est : %f\n",ES1.calculeMode());
    printf(" la moyenne est : %f\n",ES1.calculeMoyenne());
    printf(" on ajoute 15 a la 4 eme place \n");
    vecteur[3]=15 ; 
    printf(" le mode est : %f\n",ES1.calculeMode());

    return 1 ;
}

