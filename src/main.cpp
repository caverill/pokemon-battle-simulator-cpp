#include <iostream>

using namespace std;

class Pokemon
{
public:
    string name = "Unknown";
    int pokedexNumber = 0;
    int level = 5;
    int health = 100;
    int attack = 10;
    int defense = 10;

    void displayInfo()
    {
        cout << "\n=== " << name << " ===" << endl;
        cout << " Pokedex Number: " << pokedexNumber << endl;
        cout << " Level: " << level << endl;
        cout << " Health: " << health << endl;
        cout << " Attack: " << attack << endl;
        cout << " Defense: " << defense << "\n"
             << endl;
    }

    void takeDamage(int damage)
    {
        if (damage > health)
        {
            health = 0;
            cout << name << " takes " << damage << " damage!" << endl;
        }
        else if (damage < 0)
        {
            cout << "Damage cannot be a negative value" << endl;
        }
        else
        {
            health -= damage;
            cout << name << " takes " << damage << " damage!" << endl;
        }
    }
};

int main()
{
    Pokemon Bulbasaur;
    Bulbasaur.name = "Bulbasaur";
    Bulbasaur.pokedexNumber = 1;
    Bulbasaur.level = 5;
    Bulbasaur.health = 100;
    Bulbasaur.attack = 14;
    Bulbasaur.defense = 25;

    Pokemon Charmander;
    Charmander.name = "Charmander";
    Charmander.pokedexNumber = 4;
    Charmander.level = 5;
    Charmander.health = 26;
    Charmander.attack = 14;
    Charmander.defense = 10;

    Pokemon Squirtle;
    Squirtle.name = "Squirtle";
    Squirtle.pokedexNumber = 7;
    Squirtle.level = 5;
    Squirtle.health = 100;
    Squirtle.attack = 25;
    Squirtle.defense = 10;

    Charmander.displayInfo();
    Charmander.takeDamage(100);
    Charmander.displayInfo();

    Bulbasaur.displayInfo();
    Squirtle.displayInfo();
}