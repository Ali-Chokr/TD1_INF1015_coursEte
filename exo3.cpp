/*
* Ce programme permet de déterminer si une collision se produit dans les x premières secondes d’un trajet.
* \file    td1.cpp
* \authors Ali Lakkis et Ali Chokr
* \date    15 mai 2025
* Créé le  9 mai 2025
*/


#include "exo3.hpp"
#include "exo2.hpp"

using namespace std;


void Exo3::affichageExo3() {
	Exo2 exo2;
	cout << "Exercice 3" << endl;
	int tempsTotal = exo2.lireValeur("Entrez le temps total : ", 1, INFINITY);
	int positionTrain1 = exo2.lireValeur("Entrez la position initiale du premier train : ", -INFINITY, INFINITY);
	int vitesseTrain1 = exo2.lireValeur("Entrez la vitesse du premier train : ", -100, 100);
	int positionTrain2 = exo2.lireValeur("Entrez la position initiale du second train : ", -INFINITY, INFINITY);
	int vitesseTrain2 = exo2.lireValeur("Entrez la vitesse du second train : ", -100, 100);

	bool collision = false;
	int anciennePos1 = positionTrain1;
	int anciennePos2 = positionTrain2;

	for (int i = 1; i <= tempsTotal; i++) {
		positionTrain1 += vitesseTrain1;
		positionTrain2 += vitesseTrain2;

		cout << "Apres " << i << " seconde(s)" << endl;
		cout << "Train 1 : " << positionTrain1 << endl;
		cout << "Train 2 : " << positionTrain2 << endl;

		if (positionTrain1 == positionTrain2) {
			cout << "Il y a eu une collision pendant la " << i << "e seconde!" << endl;
			collision = true;
			break;
		}

		if ((anciennePos1 < anciennePos2 && positionTrain1 > positionTrain2) ||
			(anciennePos1 > anciennePos2 && positionTrain1 < positionTrain2)) {
			cout << "Il y a eu une collision entre la " << (i - 1) << "e et la " << i << "e seconde!" << endl;
			collision = true;
			break;
		}

		anciennePos1 = positionTrain1;
		anciennePos2 = positionTrain2;
	}

	if (!collision) {
		cout << "Il n'y a pas eu de collision." << endl;
	}
}

