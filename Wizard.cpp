#include "Wizard.hpp"
#include "Character.hpp"

string Wizard::getWeapon() const
{
    return "Bâton";
}

void Wizard::display() const
{
    cout << "Ceci est un mage." << endl;
}