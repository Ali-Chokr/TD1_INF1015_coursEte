/*
* Ce programme affiche le premier nombre premier supérieur ou égal à une valeur entrée.
* \file    td1.cpp
* \authors Ali Lakkis et Ali Chokr
* \date    15 mai 2025
* Créé le  9 mai 2025
*/


#include "exo1.hpp"

using namespace std;


bool Exo1::estPremier(int n) {

    for (int i = 2; i <= sqrt(n); i++) {

        if (n % i == 0) {
            return false;
        }
    }
	return true;
}

void Exo1::affichageExo1() {
	cout << "Exercice 1" << endl;
    int nombre;

    while (true) {
        cout << "Entrez un nombre entier: ";
        cin >> nombre;

        if (nombre != -1) {
            while (estPremier(nombre) == false) {
                nombre++;
            }
            cout << "Le nombre premier suivant est: " << nombre << endl;
        }

        if (nombre == -1) {
            break;
        }
    }
}

