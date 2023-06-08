#include "EtudeStatistique1D.h"



//constructeur d'initialisation
//REMPLACER PAR UN OBJET DATASURCE1D
EtudeStatistique1D::EtudeStatistique1D(DataSource1D* data)   
{   
        cout << "(Etudestat) debut du constructeur" << endl;
    
        cout<<"(Etudestat) verif de la lectur des donness  "<<endl;
       
        //passage de l'obj datasource contenu dans echantillon au différente fonction
        calculeMoyenne(data);
        calculeMediane(data);
        calculeMode(data);
        calculeS(data);
        calculeRange(data);
        calculeCV(data);
         

        affiche();
        //calcul plus appel affiche
        cout <<"(Etudestat) fin du constructeur" <<endl;
}

//destructeur
EtudeStatistique1D::~EtudeStatistique1D()
{

}

//fonction qui calcule les differents champs

/***********************************************************************************
calcule la moyenne de mon vecteur
***********************************************************************************/

void EtudeStatistique1D::calculeMoyenne(DataSource1D* d)      
{
        int somme=0 ; 
        int i ;

        for( i=0; i<10;i++)
        {
             somme+= d->getVecteur()[i]*i;  //exemple 5 uniter * 5 points
        }

        moyenne = somme/d->getEffectifTotal() ; 
}

/***********************************************************************************
calcule le maximum dans mon vecteur valeur qui son le plus souvent présente
***********************************************************************************/

void EtudeStatistique1D::calculeMode(DataSource1D* d)
{
	int Valeur = 0;
        int j = 0;

        for(int i = 0 ; i<3 ; i++)
        {
             mode[i]=0;   
        } 

	
	for (int i = 0; i < 10; i++)
	{
		if (Valeur < d->getVecteur()[i])
		{
			Valeur = d->getVecteur()[i];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if ( Valeur == d->getVecteur()[i] && j < 3 )
		{
			mode[j] = i + 1;
			j++;
		}
	}
}

/***********************************************************************************
calcule la mediane 
***********************************************************************************/

void EtudeStatistique1D::calculeMediane(DataSource1D* d)
{
        mediane=  (d->getVecteur()[4] + d->getVecteur()[5]) /2; 
}

/***********************************************************************************
calcule 
***********************************************************************************/

void EtudeStatistique1D::calculeS(DataSource1D* d)
{
        int  tmp = 0 ;
        int dif = 0 ;
        int i = 0 ;

        for( i=0; i<10;i++)
        {
                tmp+= (i+1)*pow(d->getVecteur()[i] - getMoyenne(),2);
        }

        ecart_type= sqrt(tmp/d->getEffectifTotal());
}

/***********************************************************************************
calcule de létendue
***********************************************************************************/

void EtudeStatistique1D::calculeRange(DataSource1D* d)
{
        int etendue= 0 ;

        int minVal = d->getVecteur()[0];
        int maxVal = d->getVecteur()[0];
    
        for (int i = 1; i < 10; i++) 
        {
                if (d->getVecteur()[i] < minVal) 
                {
                        minVal = d->getVecteur()[i];
                }
                if (d->getVecteur()[i] > maxVal) 
                {
                        maxVal = d->getVecteur()[i];
                }
        }
    
        etendue = maxVal - minVal; // etendue = la valeur max moin la valeur min du vec
}

/***********************************************************************************
calcule du coeficient de variation
***********************************************************************************/

void EtudeStatistique1D::calculeCV(DataSource1D* d)
{
	coef_var = (ecart_type/moyenne)*100;
}

//getter de mes variable

float EtudeStatistique1D::getMoyenne()
{
        return moyenne;
}

float EtudeStatistique1D::getMediane()
{
        return mediane; 
}

float EtudeStatistique1D::getMode()
{
        return mode[0];
}

float EtudeStatistique1D::getecartType()
{
        return ecart_type ;
}

float EtudeStatistique1D::getEtendue()
{
        return etendue;
}

float EtudeStatistique1D::getCoef_var()
{
        return coef_var ; 
}



void EtudeStatistique1D::affiche()
{
        cout<<("la moyenne est de : ") << moyenne << endl ;
        cout<<("la mediane  est de : ") << mediane << endl ;
        cout<<("le premier mode est de : ") << mode[0] << endl ;

        if(mode[1]!=0) 
        {
                cout<<("le deuxieme mode est de : ") << mode[1] << endl ;
                if(mode[2]!=0) cout<<("le troisieme mode est de : ") << mode[2] << endl ;
        }

        cout<<("l'ecart type est de : ") << ecart_type << endl ;
        cout<<("l'etendue est de : ") << etendue << endl ;
        cout<<("le coefficient de variation est de : ") << coef_var << endl ;
}