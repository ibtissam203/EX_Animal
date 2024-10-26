#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
protected:
    std::string nom;
    std::string race;
    int age;

public:
    Animal(std::string n, std::string r, int a);
    virtual void afficher() const;
    virtual void manger();

    ~Animal();
};

#endif
