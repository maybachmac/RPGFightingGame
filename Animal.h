#pragma once
#include "Fighter.h"
#include <string>
#include <map>
#include <iostream>
using namespace std;
//animal is already my abstract class, thankfully.
class Animal: public Fighter {
protected:
    int health;
    int attackPower;
    string name;
    string nameOfAnimal;
    string habitatType;
    static int totalAnimals;
    //used a map to hold animals  in each specific habitat, also may be examply of polymorphic behavior
    static map<string, int> animalTypeCount;
    //protected since eating doesnt need to be invoked onto anything unless it is an is-a relationship
    virtual void eats() const =0;
    
public:
    Animal(string nameOfAnimal, string name, int attackPower, int health);
    virtual void displayInfo() const = 0;
    virtual void makeSound() const = 0;
    virtual void raiseRacket() const;
    string getHabitatType() const;
    int getHealth() const override;
    int getAttackPower() const override;
    bool isAlive() const override;
    void defend(int damage) override;
    static int animalCount();
    static int animalCount(string nameOfAnimal);
    string getFighter() const override;
    virtual ~Animal() = default;
    
};



/*Ill be frank, dynamic casting is basically only used when calling NONVIRTUAL FUNCTIONS
(it being non virtual implies that the
function is specific to the derived class, not the base)
onto pointers
*/