#ifndef OISEAU_H
#define OISEAU_H

#include "Animal.h"

class Oiseau : public Animal {
private:
    int taille_Aile;

public:
    Oiseau(std::string nom, int age, int T);
    void afficher() const override;
    void manger() override;
};

#endif
