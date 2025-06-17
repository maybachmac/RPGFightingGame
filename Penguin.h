#pragma once
#include "Animal.h"

class Penguin : public Animal {
public:
    Penguin(string nameOfAnimal, string name, int attackPower, int health);
 
    void displayInfo() const override;
    void makeSound() const override;
    void slideAway() const;
    void eats() const override;
};
