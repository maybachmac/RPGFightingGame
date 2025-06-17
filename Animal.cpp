#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

//initializers for map and totalAnimals
map<string, int> Animal::animalTypeCount;
int Animal::totalAnimals = 0;
//every created animal uses this base in order to interface with figher and be put in the Arena
Animal::Animal( string nameOfAnimal, string name, int attackPower, int health) {
    this->nameOfAnimal = nameOfAnimal;
    this->name = name;
    this->attackPower = attackPower;
    this->health = health;
    totalAnimals++;
    animalTypeCount[nameOfAnimal]++;
}
int Animal::animalCount() {
    return totalAnimals;
}
//specific to the animal type i.e. Elephant,Wyrm,Cheetah ect, outputs the map
int Animal::animalCount(string nameOfAnimal) {
    return animalTypeCount[nameOfAnimal];
}

string Animal::getHabitatType() const {
    return habitatType;
}

void Animal::raiseRacket() const {

}

string Animal::getFighter() const {
    return nameOfAnimal;
}

//4th parameter passed in constructor is returmed
int Animal::getHealth() const {
    return health;
}
//3rd parameter passed in constrctor is returned
int Animal::getAttackPower() const {
    return attackPower;
}
//defend is basically how i havce the fighters take damage from eachother
void Animal::defend(int damage) {
    health -= damage;
    if (health < 0)
    {
        health = 0;
        cout << "Fighter defeated" << endl;
    }
}

bool Animal::isAlive() const {
    return health > 0;
}
