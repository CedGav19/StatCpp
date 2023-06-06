#include "DataSource1D.h"
#include"EtudeStatistique1D.h"
#include "Echantillon.h"
#include <cstring>
#include <iostream>
#include <fstream>
int main() 
{
    //ZONE DE TEST 

    cout<< "(MAIN) etude statistique de notre foichier "<< endl ; 
    
    Echantillon Ech(3); 


    EtudeStatistique1D E1(*(Ech.getData()));

    cout<<"(MAIN) apres la creation de etude statistique "<<endl;
 
        for (int i =0 ; i<=10 ;i++)
         {
        cout << i<< " = " <<Ech.getData()->getVecteur()[i] << endl ;
          }

    //FIN DE ZONE 

    // FAIRE LE MENU    

    // on aura un truc du genre 
    // etudestatistique(Echantillon(nomdufichier).data)


    
    return 1 ;
}

