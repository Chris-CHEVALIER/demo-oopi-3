#include <iostream>
#include "Character.hpp"
using namespace std;
#pragma once

class Warrior : public Character
{
private:
    int stamina;

public:
    void display() const;
    string getWeapon() const;
};