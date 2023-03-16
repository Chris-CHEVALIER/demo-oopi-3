#include "Wizard.hpp"
#include "Character.hpp"

Wizard::Wizard()
{
    mana = 100;
}

Wizard::Wizard(string newName, int newLife, int newMana) : Character(newName, newLife)
{
    mana = newMana;
}

void Wizard::castASpell() const
{
    cout << name << " lance un sort !" << endl;
}

void Wizard::takeManaPotion()
{
    mana += 25;
}

void Wizard::display() const
{
    Character::display();
    cout << "C'est un mage avec " << mana << " points de mana" << endl;
}