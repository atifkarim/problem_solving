/*
// with one construcotor it is possible to do all of the task of 3 types of constructor. see in the MAIN function
*/

#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;

public:
    /***
     * 
     * difference is here we have to declare a default value which is absent in the other code
     * It is also not mandatory to keep the same name as like as the private member in the
     * declaration of the constructor
     *
     ***/
    Player(string name_2 = "NONE", int health_2 = 0, int xp_2 = 0);
};

// with one construcotor it is possible to do all of the task of 3 types of constructor. see in the MAIN function

Player::Player(string name_val_1, int health_1, int xp_1)
    : name{name_val_1}, health{health_1}, xp{xp_1}
{
    cout << "------------------------------------Default constructor is called------------------------------------" << endl;
    cout << "Here name: " << name_val_1 << " ,health: " << health_1 << " ,xp: " << xp_1 << endl;
}

int main()
{
    cout << "\nNo arg constructor is calling\n";
    Player empty;
    cout << "\n1 arg constructor is calling\n";
    Player Frank("Atif");
    cout << "\n2 arg constructor is calling\n";
    Player hero("Atif", 45);
    cout << "\n3 arg constructor is calling\n";
    Player villain("Atif", 45, -58);
    cout << "\nUsing Pointer obj constructor is calling\n";
    Player *enemy = new Player("Enemy", 89, 65);
    delete enemy;

    return 0;
}