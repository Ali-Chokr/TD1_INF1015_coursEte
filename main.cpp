/*
* Ce programme génère les affichage des exercices 1 à 5.
* \file    td1.cpp
* \authors Ali Lakkis et Ali Chokr
* \date    15 mai 2025
* Créé le  9 mai 2025
*/


#include <iostream>
#include <stdio.h>
#include "exo1.hpp"
#include "exo2.hpp"
#include "exo3.hpp"
#include "exo4.hpp"
#include "exo5.hpp"



int main() {
	// Exercice 1
	Exo1 exo1;
	exo1.affichageExo1();

	 //Exercice 2
	Exo2 exo2;
	exo2.affichageExo2();
	
	// Exercice 3
	Exo3 exo3;
	exo3.affichageExo3();
	
	// Exercice 4
	Exo4 exo4;
	exo4.affichageExo4();
	
	//Exercice 5
	Exo5 exo5;
	exo5.affichageExo5();
}