#include "Elephant.h"
#include <string>
#include <iostream>
using namespace std;

Elephant::Elephant(string nameOfAnimal, string name, int attackPower, int health)
    : Animal(nameOfAnimal, name, attackPower, health) 
{
    habitatType = "Savannah";
}

//examply of override not needing to be used in cpp, only in header, implementation of map
void Elephant::displayInfo() const {
    cout << "This animal is a " << nameOfAnimal << endl << "Name: " << name << ", currently at HP:" << health << endl;
}

void Elephant::makeSound() const {
    cout << "The " << nameOfAnimal << "'s" << " trumpet loudly with dominance!" << endl;
}

void Elephant::stompFeet() const {
    cout << "The Elephants stomp their feet!" << endl << endl;
}

void Elephant::eats() const {
    cout << "ELephants eat grass and vegetables" << endl << endl;

}