#include "Habitat.h"
#include "Lion.h"
#include "Penguin.h"
#include "Elephant.h"
#include "Cheetah.h"
#include "Wyrm.h"
#include <iostream>
#include <string>

using namespace std;

vector<Animal*> animals;

Habitat::Habitat(string type) {
    this->type = type;
}

void Habitat::addAnimal(Animal* a) {
    if (a->getHabitatType() == type) {
        animals.push_back(a);
    }
    else {
        cout << "ERROR: This animal doesn't belong in a " << type << " habitat." << endl;
    }
}

void Habitat::displayAll() const {
    //polymorphic behavior, given that the type for auto in this case is a pointer since we know animals is of a pointer vector Animals*
    //also, this is a for loop that goes through from start to end of a container, the container has a built in .begin() and .end(). 
    // calling the current index the variable "a" for the current pointer in the animals vector of pointers
    for (auto a : animals) {
        a->displayInfo();
        cout << "Habitat: " << type << endl << endl;
    } 
}

    string Habitat::getType() const {
        return type;
    }
   
    void Habitat::raiseRacket() const {
        cout << "Racket from the " << type << " Habitat" << endl;
        //dynamic dispatch of animal behaviors
        for (auto a : animals) {
            a->makeSound(); // normal polymorphic dispatch
            a->raiseRacket();
            // Downcast: Lion-only function, ill leave it alone since technically i want to display dynamic casting, so only Lion
            if (Lion* lion = dynamic_cast<Lion*>(a)) {
                lion->countPennies(); // non-virtual, specific to 3
            }
            //example 
            if (Penguin* penguin = dynamic_cast<Penguin*>(a)) {
                penguin->slideAway(); // only defined in Penguin
            }

            if (Elephant* elephant = dynamic_cast<Elephant*>(a)) {
                elephant->stompFeet(); // only defined in Elephant
            }
            if (Cheetah* cheetah = dynamic_cast<Cheetah*>(a)) {
                cheetah->dashOut(); //only defined in Cheetah
            }
            if (Wyrm* wyrm = dynamic_cast<Wyrm*>(a)) {
                wyrm->breatheFire(); //only defined in Wyrm
            }

        }
    }
    
    