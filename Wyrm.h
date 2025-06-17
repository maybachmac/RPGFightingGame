#pragma once
#include "Animal.h"
class Wyrm : public Animal {
public:
    Wyrm(string nameOfAnimal, string name, int attackPower, int health);
    void displayInfo() const override;
    void makeSound() const override;
    void breatheFire() const;
    void eats() const override;
};
