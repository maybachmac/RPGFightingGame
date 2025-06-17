#include "Lion.h"
#include <iostream>
using namespace std;

Lion::Lion(string nameOfAnimal, string name, int attackPower, int health)
    : Animal(nameOfAnimal, name, attackPower, health) {
    habitatType = "Savannah(Lion Den)";
}

void Lion::displayInfo() const {
    cout << "This animal is a " << nameOfAnimal << endl << "Name: " << name << ", currently at HP:" << health << endl;
}

void Lion::makeSound() const {
    cout << "The " << nameOfAnimal << "'s" << " roar loadly pride!";
}

void Lion::countPennies() const {
    std::cout << "The lion counts... pennies?? ????" << endl << endl;
}

void Lion::eats() const {
    cout << "Lions eat meat, prefereably steak." << endl << endl;
}