# StatCpp

Recap : 

Dans le fichier EtudeStatistique 1 D oon doit passer en parametre dans le constructeur un objet de type 
DataSourced 1 d qui contient un tableau de int 

la classe Echantillon recup les infos dans le fichier et correspon a une seule colonne du fichier

Echantillon clontient donc un objket DATASOURCE1D 

DataSource1D contient un vec de 10 int , une var effectif total , constructeur par defaut qui mets 0 dans chaque case ,set ;, get , et incrementation 

Etudestat1D : construceteur avec datasource1d en prametre, methodesstatistiqueet setget correspondant ,mode 3 cases ,pour gerer le cas multimodale ,methode affiche u
le constructeur appellechacune des mpethodes puis se termine 

application : contient un menu ou on demande quelle colonne du fichier nous interesse. 

Recap : main -> menu-> cree Echantillon(en precisant le nom du fichier a ouvrir)  ( ->cree un objet Datasource1D)->cree EtudeStatistique1D a partir des data de l'objet echantillon   