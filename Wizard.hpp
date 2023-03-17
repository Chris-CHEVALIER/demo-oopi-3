#include <iostream>
#include "Character.hpp"
using namespace std;
#pragma once

class Wizard : public Character
{
private:
    int mana;

public:
    void display() const;
    string getWeapon() const;
};