
#include "Arena.h"
#include <iostream>
using namespace std;

Arena::Arena(Fighter* f1, Fighter* f2) : fighter1(f1), fighter2(f2) {}

void Arena::displayFightInfo() {
    cout << fighter1->getFighter() << " vs. " << fighter2->getFighter() << endl;
    cout << "Fighter 1 is a " << fighter1->getFighter() << " with HP: " << fighter1->getHealth() << endl;
    cout << "Fighter 2 is a " << fighter2->getFighter() << " with HP: " << fighter2->getHealth() << endl;
    
}

void Arena::startBattle() {
    cout << "Battle begins!\n";
    int round = 1;

    while (fighter1->isAlive() && fighter2->isAlive()) {
        cout << "--- Round " << round << " ---\n";

        // Fighter 1 attacks Fighter 2
        cout << "Fighter 1 attacks!\n";
        fighter2->defend(fighter1->getAttackPower());
        cout << "Fighter 2 HP: " << fighter2->getHealth() << endl;

        if (!fighter2->isAlive()) {
            cout << "Fighter 2 defeated!\n";
            break;
        }

        // Fighter 2 attacks Fighter 1
        cout << "Fighter 2 attacks Fighter 1\n";
        fighter1->defend(fighter2->getAttackPower());
        cout << "Fighter 1 HP: " << fighter1->getHealth() << endl;

        if (!fighter1->isAlive()) {
            cout << "Fighter 1 defeated!\n";
            break;
        }

        round++;
    }

    cout << "Battle over!\n";
    if (fighter1->isAlive()) {
        cout << "Fighter 1 wins!\n";
    }
    else {
        cout << "Fighter 2 wins!\n";
    }
}
