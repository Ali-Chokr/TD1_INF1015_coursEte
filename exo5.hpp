
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>

using namespace std;


const int MAX_ALIMENTS = 10;

struct Aliment {
	string nom;
	string type;
	int quantite;
	double prixUnitaire;
};


struct Exo5 {
	void affichageExo5();
};
