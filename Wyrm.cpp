#include "Wyrm.h"
#include <string>
#include <iostream>
using namespace std;

Wyrm::Wyrm(string nameOfAnimal, string name, int attackPower, int health)
	: Animal (nameOfAnimal, name, attackPower, health) 
{
	habitatType = "Cave";
}

void Wyrm::displayInfo() const {
	cout << "This animal is a " << nameOfAnimal << endl << "Name: " << name << ", currently at HP:" << health << endl;;
}

void Wyrm::makeSound() const {
	cout << "The " << nameOfAnimal << "'s" << " hiss with Malice" << endl;
}

void Wyrm::breatheFire() const {
	cout << "The Wyrm breathes fire into the sky!" << endl << endl;
}

void Wyrm::eats() const {
	cout << "Wyrms eat ...  anything it gets its hands on" << endl << endl;
}
