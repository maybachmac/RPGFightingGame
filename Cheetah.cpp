#pragma once
#include "Cheetah.h"
#include <string>
#include<iostream>
using namespace std;

Cheetah::Cheetah(string nameOfAnimal, string name, int attackPower, int health)
	: Animal(nameOfAnimal, name, attackPower, health) 
{// assigns the habitat AFTER creation
	habitatType = "Savannah(Cheetah Den)";
}

void Cheetah::displayInfo() const {
	cout << "This animal is a " << nameOfAnimal << endl << "Name: " << name <<", currently at HP:"<< health << endl;
}

void Cheetah::makeSound() const {
	cout << "The " << nameOfAnimal << "'s" << " MEOOOW(idk) with Impatience!" << endl;
}

void Cheetah::dashOut() const {
	cout << "The Cheetah dashes away with explosive speed!" << endl << endl;
}

void Cheetah::eats() const {
	cout << "Cheetah eats meat and rice." << endl << endl;
}