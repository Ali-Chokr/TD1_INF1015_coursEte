/*
* Ce programme permet de deviner la valeur d’un nombre entier choisi aléatoirement entre 0 et 1000. 
* \file    td1.cpp
* \authors Ali Lakkis et Ali Chokr
* \date    15 mai 2025
* Créé le  9 mai 2025
*/


#include "exo2.hpp"

using namespace std;


int Exo2::lireValeur(const string& texte, double min, double max) {
	double valeur;
	while (true) {
		cout << texte;
		cin >> valeur;

		if (valeur < min || valeur > max) { }
		else { return valeur; }
	}
}


void Exo2::affichageExo2() {
	cout << "Exercice 2" << endl;
	int nombre;
	int essai = 0;
	srand(time(0)); 
	int nombreAleatoire = rand() % 1001;
	while (true) {

		nombre = lireValeur("Entrez un nombre entier : ", 0, 1000);
		essai++;
		if (nombre < nombreAleatoire) {
			cout << "Trop bas." << endl;
		}
		else if (nombre > nombreAleatoire) {
			cout << "Trop haut." << endl;
		}
		else {
			cout << "Bravo! Vous avez reussi en " << essai << " tentatives!" << endl;
			break;
		}
	}
}

