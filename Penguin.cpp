#include "Penguin.h"
#include <iostream>

Penguin::Penguin(string nameOfAnimal,string name, int attackPower, int health)
: Animal(nameOfAnimal,name, attackPower, health) 
{
    habitatType = "Tundra";
}

void Penguin::displayInfo() const {
    cout << "This animal is a " << nameOfAnimal << endl << "Name: " << name << ", currently at HP:" << health << endl;;
}

void Penguin::makeSound() const {
    cout << "The " << nameOfAnimal << "'s" << "sqack with Solitude?" << endl;
}

void Penguin::slideAway() const {
    cout << "The Penguins slide around the Tundra!" << endl << endl;
}

void Penguin::eats() const {
    cout << "The Penguin eats fish" << endl << endl;
}