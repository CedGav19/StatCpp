
main:	main.cpp DataSource1D.o  EtudeStatistique1D.o Echantillon.o
		g++ main.cpp DataSource1D.o  EtudeStatistique1D.o Echantillon.o -o main

DataSource1D.o: DataSource1D.h DataSource1D.cpp
		g++ DataSource1D.cpp -c


EtudeStatistique1D.o: EtudeStatistique1D.h EtudeStatistique1D.cpp
		g++ EtudeStatistique1D.cpp -c

Echantillon.o: Echantillon.h Echantillon.cpp
		g++ Echantillon.cpp -c
	