#ifndef CHIEN_H
#define CHIEN_H

#include "Animal.h"
#include <string>

class Chien : public Animal {
private:
    std::string jouet;

public:
    Chien(std::string n, int a, std::string j);
    void afficher() const override;
    void manger() override;
};

#endif
