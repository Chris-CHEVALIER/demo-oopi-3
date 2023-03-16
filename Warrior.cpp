#include "Warrior.hpp"
#include "Character.cpp"

Warrior::Warrior()
{
    stamina = 100;
}

Warrior::Warrior(string newName, int newLife, int newStamina) : Character(newName, newLife)
{
    stamina = newStamina;
}

void Warrior::attack()
{
    stamina -= 25;
}

int Warrior::getStamina() const
{
    return stamina;
}

void Warrior::display() const
{
    Character::display();
    cout << "C'est un guerrier avec " << stamina << " points d'endurance" << endl;
}