#include "Chien.h"
#include <iostream>
using namespace std;

Chien::Chien(string n, int a, string j) : Animal(n, "chien", a), jouet(j) {}

void Chien::afficher() const {
    Animal::afficher();
    cout << "Le jouet prefere est : " << jouet << endl;
}

void Chien::manger()
{
    cout << "manger du chien " << endl;
}
