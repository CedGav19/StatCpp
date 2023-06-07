#include "DataSource1D.h"
#include"EtudeStatistique1D.h"
#include "Echantillon.h"
#include <cstring>
#include <iostream>
#include <fstream>

int main() 
{
    //MENU
    /*int choix,menu = true;

    while (menu) {
        cout << "pour quel aspect de la station de ski il souhaite voir l'étude statistique :" << endl;
        cout << "1. colone 1" << endl;
        cout << "2. colone 2" << endl;
        cout << "3. colone 3" << endl;
        cout << "4. Quitter 4" << endl;

        cout << "Choisissez une option : ";
        cin >> choix;

        switch (choix) {
            case 1:
                cout << "Calcule de la premiere colone en cours" << endl;
                //instancie un echantillon
                Echantillon colone1(1);
                EtudeStatistique1D test1(colone1.getData());
                test1.affiche();
            break;

            case 2:
                cout << "Calcule de la deuxieme colone en cours" << endl;
                //instancie un echantillon
                Echantillon colone2(2);
                //fait les calcules
                EtudeStatistique1D test2(colone2.getData());
                //affiche les resultat
                test2.affiche();
            break;

            case 3:
                cout << "Calcule de la troisieme colone en cours" << endl;
                //instancie un echantillon
                Echantillon colone3(3);
                EtudeStatistique1D test3(colone3.getData());
                test3.affiche();
                break;
            case 4:
                cout << "Vous quitter l'aplication" << endl;
                menu = false;
            
            break;
        }
    }*/

    //ZONE DE TEST 

    cout<< "(MAIN) etude statistique de notre foichier "<< endl ; 
    
    Echantillon Ech(3); 


   // EtudeStatistique1D E1(*(Ech.getData()));

    cout<<"(MAIN) apres la creation de etude statistique "<<endl;
 
        for (int i =0 ; i<=10 ;i++)
         {
        cout << i<< " = " <<Ech.getData()->getVecteur()[i] << endl ;
          }

    //FIN DE ZONE 

    return 1 ;
}

