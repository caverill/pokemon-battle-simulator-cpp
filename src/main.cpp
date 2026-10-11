#include <iostream>

using namespace std;

class Pokemon
{
private:
    string name{"Unknown"};
    int pokedexNumber{0};
    int level{5};
    int health{100};
    int attack{10};
    int defense{10};

public:
    // Getters

    string getName()
    {
        return name;
    }

    int getPokedexNumber()
    {
        return pokedexNumber;
    }

    int getLevel()
    {
        return level;
    }

    int getHealth()
    {
        return health;
    }

    int getAttack()
    {
        return attack;
    }

    int getDefense()
    {
        return defense;
    }

    // Setters

    void setName(string incomingName)
    {
        if (incomingName == "")
        {
            cout << "Name cannot be empty." << endl;
        }
        else
        {
            name = incomingName;
        }
    }

    void setPokedexNumber(int incomingPokedexNumber)
    {
        if (incomingPokedexNumber < 1 || incomingPokedexNumber > 151)
        {
            cout << "Pokedex number must be between 1 and 151." << endl;
        }
        else
        {
            pokedexNumber = incomingPokedexNumber;
        }
    }

    void setLevel(int incomingLevel)
    {
        if (incomingLevel < 1 || incomingLevel > 100)
        {
            cout << "Level must be between 1 and 100." << endl;
        }
        else
        {
            level = incomingLevel;
        }
    }

    void setHealth(int incomingHealth)
    {
        if (incomingHealth < 0 || incomingHealth > 100)
        {
            cout << "Health must be between 0 and 100." << endl;
        }
        else
        {
            health = incomingHealth;
        }
    }

    void setAttack(int incomingAttack)
    {
        if (incomingAttack < 1)
        {
            cout << "Attack must be greater than 0." << endl;
        }
        else
        {
            attack = incomingAttack;
        }
    }

    void setDefense(int incomingDefense)
    {
        if (incomingDefense < 1)
        {
            cout << "Defense must be greater than 0." << endl;
        }
        else
        {
            defense = incomingDefense;
        }
    }

    void takeDamage(int incomingDamage)
    {
        if (incomingDamage < 0)
        {
            cout << "Damage cannot be a negative value" << endl;
            return;
        }
        else if (incomingDamage > health)
        {
            setHealth(0);
        }
        else
        {
            int remainingHealth = getHealth() - incomingDamage;
            setHealth(remainingHealth);
        }

        cout << name << " takes " << incomingDamage << " damage!" << endl;
    }

    void displayInfo()
    {
        cout << "\n=== " << getName() << " ===" << endl;
        cout << " Pokedex Number: " << getPokedexNumber() << endl;
        cout << " Level: " << getLevel() << endl;
        cout << " Health: " << getHealth() << endl;
        cout << " Attack: " << getAttack() << endl;
        cout << " Defense: " << getDefense() << "\n"
             << endl;
    }
};

int main()
{
    Pokemon Bulbasaur;
    Bulbasaur.setName("Bulbasaur");
    Bulbasaur.setPokedexNumber(1);
    Bulbasaur.setLevel(5);
    Bulbasaur.setHealth(100);
    Bulbasaur.setAttack(14);
    Bulbasaur.setDefense(25);

    Pokemon Charmander;
    Charmander.setName("Charmander");
    Charmander.setPokedexNumber(4);
    Charmander.setLevel(5);
    Charmander.setHealth(26);
    Charmander.setAttack(14);
    Charmander.setDefense(10);

    Pokemon Squirtle;
    Squirtle.setName("Squirtle");
    Squirtle.setPokedexNumber(7);
    Squirtle.setLevel(5);
    Squirtle.setHealth(100);
    Squirtle.setAttack(25);
    Squirtle.setDefense(10);



    Bulbasaur.displayInfo();
    Charmander.displayInfo();
    Squirtle.displayInfo();
}