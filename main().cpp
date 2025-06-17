#include "Zoo.h"
#include "Lion.h"
#include "Penguin.h"
#include "Wyrm.h"
#include "Elephant.h"
#include "Cheetah.h"
#include "Arena.h"
#include <iostream>
//let me know if my included libraries need to be cleaned up
using namespace std;

//will put the address to created objects in heap in a stack allocated vector, just a vector of adresses basically and i named it animals


int main() {
    //Creates the Zoo
        Zoo zoo;
        //stack allocated memory no pointer required
        Habitat savannah("Savannah(Lion Den)");
        Habitat savannah2("Savannah(Cheetah Den)");
        Habitat tundra("Tundra");
        Habitat savannah3("Savannah");
        Habitat cave("Cave");
        //creates Lion Fighter pointer objects to heap in stack, named leo and pingu
        Lion* leo = new Lion("Lion", "Leo", 80, 130);
        Penguin* pingu = new Penguin("Penguin", "Pingu", 35, 150);
        Wyrm* slithy = new Wyrm("Wyrm", "Slithy", 98, 220);
        Elephant* bigNose = new Elephant("Elephant", "Big-Nose", 50, 200);
        Cheetah* tyreekHill = new Cheetah("Cheetah", "Tyreek Hill", 20, 150);

         //allocates note:its best to create THEN allocate, but whatever it works
        tundra.addAnimal(pingu);
        savannah.addAnimal(leo);
        savannah2.addAnimal(tyreekHill);
        savannah3.addAnimal(bigNose);
        cave.addAnimal(slithy);

        //creates vector of <Habitat> in each named as such
        zoo.addHabitat(savannah);
        zoo.addHabitat(tundra);
        zoo.addHabitat(cave);
        zoo.addHabitat(savannah2);
        zoo.addHabitat(savannah3);
        zoo.displayZoo();
        //using polymorphism to use base class functions on objects in heap
        slithy->makeSound();
        leo->makeSound();
        pingu->makeSound();
        tyreekHill->makeSound();
        bigNose->makeSound();

        slithy->eats();
        leo->eats();
        pingu->eats();
        tyreekHill->eats();
        bigNose->eats();
        

        zoo.raiseRacket();
        //loads animals from text file
        zoo.loadFromFile("animals.txt");
        // Pass in pointers to two heap-allocated animals
       
        Arena arena(leo, slithy);  
        arena.displayFightInfo();
        arena.startBattle();
  
        // You have to MANUALLY manage data in heap :(, lives beyond scope even if the variable stored in stack dies.
        delete leo;
        delete pingu;
        delete tyreekHill;
        delete bigNose;
        delete slithy;
        
        return 0;
    }

