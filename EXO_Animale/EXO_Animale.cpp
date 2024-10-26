// exo_Animal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Animal.h"
#include "Chien.h"
#include "Oiseau.h"
using namespace std;
int main()
{
	Animal a("a1", "r1", 12);
	a.afficher();
	a.manger();
	cout << "***********" << endl;
	Chien c("dogg", 12, "corde");
	Oiseau o("o1", 1, 12);
	c.afficher();
	cout << "**manger*****" << endl;

	c.manger();
	cout << "***********" << endl;
	o.afficher();
	cout << "***manger*****" << endl;
	o.manger();
	cout << "***********" << endl;
	Animal* animal = new Chien("Rex", 5, "ball");
	animal->afficher();  // Appelera `Animal::afficher()` au lieu de `Chien::afficher()` si `afficher` n'est pas virtuel.
	cout << "***manger*****" << endl;
	animal->manger();
	delete animal;

}
