#include <iostream>
#pragma once
using namespace std;

class Character
{
protected:
    string name;
    int life;

public:
    virtual void display() const;
    virtual string getWeapon() const = 0;
    virtual ~Character();
};