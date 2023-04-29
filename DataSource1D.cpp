#include "DataSource1D.h"

DataSource1D::DataSource1D(string NomFichier)
{
    cout << "je lis mon fichier" << endl;
    char buffer[200];
    char * strToken;

    int intTampon;
    DataSource1D vec1,vec2,vec3 //trois classe pour toris different type de vec
    int vect[2];

    ifstream fichier2(NomFichier, ios::in);
    fichier.getline(buffer, 200);
    
    int i = 0;
    while(fichier2.getline(buffer, 50))
    {   

        strToken = strtok(buffer, ";,\"");
        intTampon = strToken;
        vect[0] = intTampon;

        strToken = strtok(NULL, ";,\"");
        intTampon = strToken;
        vect[1] = intTampon;

        strToken = strtok(NULL, ";,\"");
        intTampon = strToken;
        vect[2] = intTampon;

        vec1.ajouter(vect[0]);
        vec2.ajouter(vect[1]);
        vec3.ajouter(vect[2]); //la methode ajouter va trier/regarder quel type c'est et ajouter type 1 2 ou 3 

        i++;
    }
}

void DataSource1D::ajouter(int valeur)
{
    effectif++;
    switch(valeur)
    {   case 0:
            vecteur[0]++;
        break;
        case 1:
            vecteur[1]++;
        break;
        case 2:
            vecteur[2]++;
        break;
        case 3:
            vecteur[3]++;
        break;
        case 4:
            vecteur[4]++;
        break;
        case 5:
            vecteur[5]++;
        break;
        case 6:
            vecteur[6]++;
        break;
        case 7:
            vecteur[7]++;
        break;
        case 8:
            vecteur[8]++;
        break;
        case 9:
            vecteur[9]++;
        break;
    }

    return 0;
}

 DataSource1D::getEffectif()
 {
    return effectif;
 }