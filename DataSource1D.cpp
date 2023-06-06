#include "DataSource1D.h"

DataSource1D::DataSource1D()
{
    for ( int i=0;i<10;i++)vec1[i]=0;
}

DataSource1D::DataSource1D(int colonne ) // string nom de colonne 
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
       if(colonne==1 ) ajouter(*intTampon);
        
        strToken = strtok(NULL, ";,\"");
        intTampon = (int*)strToken-48;
       if(colonne==2) ajouter(*intTampon);

        strToken = strtok(NULL, ";,\"");
        intTampon = (int*)strToken-48;
       if(colonne==3)  ajouter(*intTampon); 
        
        i++;
    }
}

void DataSource1D::ajouter(int valeur)
{
    //effectif++;
    switch(valeur)
    {   case 0:
            vec1[0]++;
        break;
        case 1:
            vec1[1]++;
        break;
        case 2:
            vec1[2]++;
        break;
        case 3:
            vec1[3]++;
        break;
        case 4:
            vec1[4]++;
        break;
        case 5:
            vec1[5]++;
        break;
        case 6:
            vec1[6]++;
        break;
        case 7:
            vec1[7]++;
        break;
        case 8:
            vec1[8]++;
        break;
        case 9:
            vec1[9]++;
        break;
    }

}

 float DataSource1D::getEffectifTotal()
 {
    return effectif; 
   
 }