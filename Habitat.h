#pragma once
#include <string>
#include <vector>
#include "Animal.h"
using namespace std;

class Habitat {
private:
    string type;
    //a vector of addresses to the Animal created in memory
    vector<Animal*> animals;
public:
    Habitat(string type);
    void addAnimal(Animal* a);
    void displayAll() const;
    string getType() const;
    void raiseRacket() const;
};
