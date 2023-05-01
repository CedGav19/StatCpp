#include "DataSource1D.h"

DataSource1D::DataSource1D(string NomFichier)
{
    cout << "je lis mon fichier" << endl;
    char buffer[200];
    char * strToken;

    int *intTampon;
    int vect[2];

    ifstream fichier2(NomFichier, ios::in);
    fichier2.getline(buffer, 200);
    
    int i = 0;
    while(fichier2.getline(buffer, 50))
    {   

        strToken = strtok(buffer, ";,\"");
        intTampon = (int*)strToken-48;
        ajouter(vec1,*intTampon);
        
        strToken = strtok(NULL, ";,\"");
        intTampon = (int*)strToken-48;
        ajouter(vec2,*intTampon);

        strToken = strtok(NULL, ";,\"");
        intTampon = (int*)strToken-48;
        ajouter(vec3,*intTampon); 
        
        i++;
    }
}

void DataSource1D::ajouter(int * vecteur,int valeur)
{
    //effectif++;
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

}

 float DataSource1D::getEffectif()
 {
    //return effectif;   grace a un calcul 
    return 0  ; 
 }