#include "DataSource1D.h"
#include"EtudeStatistique1D.h"
#include "Echantillon.h"
#include <cstring>
#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    //MENU
    int choix=0;
    bool menu = true;
     

    while (menu) {
        cout << "pour quel aspect de la station de ski il souhaite voir l'étude statistique :" << endl;
        cout << "1. colone 1" << endl;
        cout << "2. colone 2" << endl;
        cout << "3. colone 3" << endl;
        cout << "4. Quitter 4" << endl;

        cout << "Choisissez une option : ";
        cin >> choix;

        switch(choix) {
             case 1:
            cout << "colonne 1 sélectionnée." << endl;
            break;
          case 2:
            cout << "colonne 2 sélectionnée." << endl;
            break;
            case 3:
               cout << "colonne 2 sélectionnée." << endl;
               break;
            case 4:
                cout << "Vous quitter l'aplication" << endl;
                menu = false;
            break;
          
        }
        if(choix==1|| choix==2|| choix==3)
        {
            Echantillon ech(choix); 
            EtudeStatistique1D E1(ech.getData());
        
      

        for (int i =0 ; i<=10 ;i++)
         {
        cout << i<< " = " <<ech.getData()->getVecteur()[i] << endl ;
          }

          cout<< "effectif : " << ech.getData()->getEffectifTotal();   
        }
    }

    return 1 ;
}

