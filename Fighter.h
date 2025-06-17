#pragma once
#include <string>
using namespace std;
//this is my fighter interface(purely virtual)
class Fighter {
public:
    virtual void defend(int damage) = 0;
    virtual bool isAlive() const = 0;
    virtual int getHealth() const = 0;
    virtual int getAttackPower() const = 0;
    virtual ~Fighter() = default;
    virtual string getFighter() const = 0;
};
