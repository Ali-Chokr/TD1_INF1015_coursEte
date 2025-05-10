/*
* Ce programme permet de saisir un tableau d’entiers (pas de vérification nécessaire) de taille 10 et le trie.
* \file    td1.cpp
* \authors Ali Lakkis et Ali Chokr
* \date    15 mai 2025
* Créé le  9 mai 2025
*/


#include "exo4.hpp"

void Exo4::affichageExo4() {
	cout << "Exercice 4" << endl;
	int tableau[10];
	cout << "Entrez 10 nombres entiers : ";
	for (int i = 0; i < 10; i++) {
		cin >> tableau[i];
	}
	for (int i = 0; i < 9; i++) {
		int minIndex = i;
		for (int j = i + 1; j < 10; j++) {
			if (tableau[j] < tableau[minIndex]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			int temp = tableau[i];
			tableau[i] = tableau[minIndex];
			tableau[minIndex] = temp;
		}
	}
	cout << "Voici le tableau trie : ";
	for (int i = 0; i < 10; i++) {
		cout << tableau[i] << " ";
	}
	cout << endl;
}
