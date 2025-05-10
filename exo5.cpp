/*
* Ce programme permet de traiter de données pour une épicerie (aliment, type, quantité, prix unitaire).
* \file    td1.cpp
* \authors Ali Lakkis et Ali Chokr
* \date    15 mai 2025
* Créé le  9 mai 2025
*/


#include "exo5.hpp"

void Exo5::affichageExo5() {
	ifstream fichier("inventaire.txt");

	Aliment inventaire[MAX_ALIMENTS];
	int nombreAliments = 0;
	while (nombreAliments < MAX_ALIMENTS) {
		getline(fichier, inventaire[nombreAliments].nom, '\t');
		getline(fichier, inventaire[nombreAliments].type, '\t');
		fichier >> inventaire[nombreAliments].quantite;
		fichier.ignore();
		fichier >> inventaire[nombreAliments].prixUnitaire;
		fichier.ignore();
		nombreAliments++;
	}
	fichier.close();
	double prixMax = 0;
	int indexMax = -1;
	for (int i = 0; i < nombreAliments; i++) {
		if (inventaire[i].prixUnitaire > prixMax) {
			prixMax = inventaire[i].prixUnitaire;
			indexMax = i;
		}
	}
	if (indexMax != -1) {
		cout << "L'aliment le plus cher est : " << inventaire[indexMax].quantite << " "
			<< inventaire[indexMax].nom << "(" << inventaire[indexMax].type << ") a "
			<< inventaire[indexMax].prixUnitaire << "$ chacun" << endl;
	}
	else {
		cout << "Aucun aliment trouve dans l'inventaire." << endl;
	}
}