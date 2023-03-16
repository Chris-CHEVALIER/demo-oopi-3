#include <iostream>
#pragma once
using namespace std;

class Character
{
protected:
    string name;
    int life;

public:
    Character();
    Character(string newName, int newLife);
    void rename(string newName);
    void takeLifePotion();
    void display() const;
};