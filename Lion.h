#pragma once
#include "Animal.h"

class Lion : public Animal {
public:
    Lion(string nameOfAnimal, string name, int attackPower, int health);
    void displayInfo() const override;
    void makeSound() const override;
    //adding a function to demonstrate dynamic casting of it; Uniqeq to lion, se lion.cpp
    void countPennies() const;
    void eats() const override;
    
};
