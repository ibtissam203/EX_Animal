#include "Oiseau.h"
#include <iostream>
using namespace std;

Oiseau::Oiseau(string nom, int age, int T) : Animal(nom, "oiseau", age), taille_Aile(T) {}

void Oiseau::afficher() const {
    Animal::afficher();
    cout << "La taille de l'aile est : " << taille_Aile << " cm" << endl;
}

void Oiseau::manger()
{
    cout << "manger de l'oiseau" << endl;
}
