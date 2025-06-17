#pragma once
#include "Animal.h"

class Elephant : public Animal {
public:
    Elephant(string nameOfAnimal, string name, int attackPower, int health);
    //example of overriding the virtual abstract function, its in all the animals.
    //have to be public for polymorphic call
    void displayInfo() const override;
    void makeSound() const override;
    void stompFeet() const;
    void eats() const override;
};