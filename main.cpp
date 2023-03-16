
#include "Wizard.cpp"
#include "Warrior.cpp"

int main()
{
    Character alexandre("Alexandre", 100);
    Wizard sirine("Sirine", 100, 100);
    Warrior saber("Saber", 10000, 10000);

    alexandre.display();
    sirine.display();
    saber.display();

    sirine.takeManaPotion();
    saber.takeLifePotion();

    sirine.display();
    saber.display();

    return 0;
}