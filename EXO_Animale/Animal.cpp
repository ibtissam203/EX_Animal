#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(string n, string r, int a) : nom(n), race(r), age(a) {}

void Animal::afficher() const {
    cout << "Nom : " << nom << endl;
    cout << "Race : " << race << endl;
    cout << "Age : " << age << endl;
}

void Animal::manger()
{
    cout << "manger de l'animale" << endl;
}

Animal::~Animal()
{
}
