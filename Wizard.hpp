#include <iostream>
#include "Character.hpp"
using namespace std;
#pragma once

class Wizard : public Character
{
private:
    int mana;

public:
    Wizard();
    Wizard(string newName, int newLife, int newMana);
    void castASpell() const;
    void takeManaPotion();
    void display() const;
};