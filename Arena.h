#pragma once
#include "Fighter.h"

class Arena {
private:
    Fighter* fighter1;
    Fighter* fighter2;

public:
    //contructor that puts a pointer object representing each fighter.
    Arena(Fighter* f1, Fighter* f2);
   void displayFightInfo();
    void startBattle();
};
