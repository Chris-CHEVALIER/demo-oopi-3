#include <iostream>
#include "Character.hpp"
using namespace std;
#pragma once

class Warrior : public Character
{
private:
    int stamina;

public:
    Warrior();
    Warrior(string newName, int newLife, int newStamina);
    void attack();
    int getStamina() const;
    void display() const;
};