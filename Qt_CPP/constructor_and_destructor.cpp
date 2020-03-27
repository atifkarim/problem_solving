#include<iostream>
#include<string>

using namespace std;

class Player{
    private:
        string name;
        int health;
        int xp;
    public:
        void set_name(string name_val){
            name = name_val;
            cout<<"name is: "<<name<<endl;
        }

        //Overloaded constructor is calling
        Player(){
            cout<<"No args constructor is called"<<endl;
        }

        Player(string name){
            cout<<"string constructor is called"<<endl;
        }

        Player(string name, int health, int xp){
            cout<<"three args constructor is called"<<endl;
        }

        ~Player(){
            cout<<"Destructor is called for "<<name<<endl;
        }

};

int main(){

    {
    Player slayer;
    slayer.set_name("Atif");
    }
cout<<"----------------------------------------------------"<<endl;
    {Player Frank;
    Frank.set_name("Bin");
    Player hero("hero");
    hero.set_name("here HERO");
    Player Villain("VIllain",100,12);
    Villain.set_name("Villain");
    // calling of destructor will be reversed in the order of calling of constructor
    }

cout<<"----------------------------------------------------"<<endl;
{
    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level_BOSS",250,21);
    level_boss->set_name("LEVEL_BOSS");

    delete enemy; // explicitly calling the destructor here so no reverse order thinking will come.
    delete level_boss;
}

    return 0;
}