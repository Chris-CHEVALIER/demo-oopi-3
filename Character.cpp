#include "Character.hpp"

Character::Character()
{
    name = "Chris";
    life = 100;
}

Character::Character(string newName, int newLife)
{
    name = newName;
    life = newLife;
}

void Character::rename(string newName)
{
    name = newName;
}

void Character::takeLifePotion()
{
    life += 25;
}

void Character::display() const
{
    cout << name << " a " << life << " points de vie." << endl;
}