#include <ParamètresStatistiques1D>

//constructeur par default
EtudeStatistique1D::EtudeStatistique1D()
{
        moyenne =0;
        mediane =0;
        mode =0;
        ecart_type =0;
        etendue =0;
        coef_var =0;
}

//constructeur d'initialisation
EtudeStatistique1D::EtudeStatistique1D(DataSource1D vec)
{   
    moyenne = calculeMoyenne(vec);
}

//destructeur
EtudeStatistique1D::~EtudeStatistique1D()
{

}

//fonction qui calcule les differnet champs

/***********************************************************************************
calcule la moyenne de mon vecteur
***********************************************************************************/

EtudeStatistique1D::calculeMoyenne(DataSource1D vec)
{
        int eff = vec.getEffectif();

        for(int somme=0,int i=0 ; i < eff ; i++)
        {
              somme = somme + vec.vecteur[i]
        }

        return moyenne = somme/eff;
}

/***********************************************************************************
calcule le maximum dans mon vecteur
***********************************************************************************/

EtudeStatistique1D::calculeMode(DataSource1D vec)
{
        int eff = vec.getEffectif();
        int max=0;

        for(int i=0 ; i < eff ; i++)
        {
              if(vec.vecteur[i] > max)
              {
                      max=vec.vecteur[i];
              }
        }

        return max;
}

EtudeStatistique1D::calculeMediane(DataSource1D vec)
{
        
}

EtudeStatistique1D::calculeS(DataSource1D vec)
{
        
}

EtudeStatistique1D::calculeRange(DataSource1D vec)
{
        
}

EtudeStatistique1D::calculeCV(DataSource1D vec)
{
        
}

//getter de mes variable

EtudeStatistique1D::getMoyenne()
{

}

EtudeStatistique1D::getMediane()
{

}

EtudeStatistique1D::getMode()
{

}

EtudeStatistique1D::getS()
{

}

EtudeStatistique1D::getRange()
{

}

EtudeStatistique1D::getCV()
{

}