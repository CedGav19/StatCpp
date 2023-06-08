#include "Echantillon.h"

Echantillon::Echantillon(int colonne )
{
    data = new DataSource1D();
    cout << "(ECHANTILLON) debut du constructeur" << endl;
    char buffer[200];
    char * strToken;

    int intTampon;

    ifstream fichier2("DataSkiInpres.csv", ios::in);
    fichier2.getline(buffer, 200);
    cout << "(ECHANTILLON) apres ouverture du fichier" << endl;
  
    int i = 0;
    while(fichier2.getline(buffer, 50))
    {   
        //enleve la premiere colonne qui est les ages
        strToken = strtok(buffer, ";");
        intTampon = stoi(strToken);
        
        //va remplir l'obj datasource avec la colone correspondant
        strToken = strtok(NULL, ";");
        intTampon = stoi(strToken);
       if(colonne==1 ) data->ajouter(intTampon);
        
        strToken = strtok(NULL, ";");
        intTampon = stoi(strToken);
       if(colonne==2) data->ajouter(intTampon);

        strToken = strtok(NULL, ";");
        intTampon = stoi(strToken);
       if(colonne==3)  data->ajouter(intTampon); 
        
        i++;
    }
    cout << "(ECHANTILLON) fin du constructeur de Echantillon" << endl;
}


DataSource1D *  Echantillon::getData()const
{
    return data ;
}





