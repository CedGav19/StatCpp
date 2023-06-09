#include "DataSource1D.h"
#include"EtudeStatistique1D.h"
#include "Echantillon.h"
#include <cstring>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
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
            default : 
                cout << "Vous quitter l'aplication" << endl;
                menu = false;
            
          
        }

        //le choix correspond a la colone sur la quel porte l'etude
        if(choix==1|| choix==2|| choix==3)
        {
            //crée un obj echantillon qui va crée un obj datasource qui contient la colone en question
            Echantillon ech(choix,argv[1]); 
            //on prend les donnée et on les fait analyser par nos fonction
            EtudeStatistique1D E1(ech.getData());
        
      

        for (int i =0 ; i<10 ;i++)
         {
        cout << i+1 << " = " <<ech.getData()->getVecteur()[i] << endl ;
          }
          cout << ech.getData()->getVecteur()[10]<<endl;

          cout<< "effectif : " << ech.getData()->getEffectifTotal();   
        }
    }

    return 1;
}

