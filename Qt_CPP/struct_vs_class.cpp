/*
by default CLASS member are private
by default STRUCT member are public
*/
#include<iostream>
#include<string>

using namespace std;

struct Player{
        string name;
        int health;
        int xp;
        Player(string name = "NONE", int health = 0, int xp = 0); // difference is here we have to declare a default value which is absent in the other code


};

// with one construcotor it is possible to do all of the task of 3 types of constructor. see in the MAIN function

Player::Player(string name_val_1, int health_1, int xp_1)
        : name{name_val_1}, health{health_1},xp{xp_1}
        {       
                cout<<"------------------------------------3 args constructor is called------------------------------------"<<endl;
                cout<<"Here name: "<<name_val_1<<" ,health: "<<health_1<<" ,xp: "<<xp_1<<endl;

        }

int main(){
    Player empty;
    Player Frank("Atif");
    Player hero("Atif",45);
    Player villain("Atif",45,-58);


    return 0;
}