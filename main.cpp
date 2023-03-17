
#include "Wizard.cpp"
#include "Character.cpp"
#include "Warrior.cpp"

#include <vector>

void introduce(Character &c)
{
    c.display();
}

int main()
{
    /* Character geralt;
    Warrior aragorn;

    introduce(geralt);
    introduce(aragorn); */

    vector<Character *> characters;

    characters.push_back(new Wizard);
    characters.push_back(new Warrior);
    characters.push_back(new Warrior);

    cout << characters[0]->getWeapon() << endl;
    cout << characters[2]->getWeapon() << endl;

    for (int i = 0; i < characters.size(); i++)
    {
        delete characters[i];
        characters[i] = 0;
    }    


    return 0;
}