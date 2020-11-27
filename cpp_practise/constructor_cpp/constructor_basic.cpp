/*
How to pass const to class
*/
#include<iostream>
#include<string>

using namespace std;

class Player{
    private:
        string name{"AAAA"};
        int health;
        int xp;
    public:
    Player();
    Player(string);
    Player(string, int, int);
        
        void set_name(string name_val){ // never ever here const because then goal of using const will be violated
            name = name_val;
            cout<<"from set name func I am saying my name is: "<<name <<endl;

        }

        string get_name() const{ // write here const
            return name;
        }
};

// Constructors are calling
// Initilaizer will be added in the constructor list
        Player::Player()
        : Player{"None",0,0}
        {
            cout<<"------------------------------------NO args constructor is called------------------------------------"<<endl;
        }

        Player::Player(string name_val)
        : Player{name_val,0,0}
        {   
            cout<<"------------------------------------1 args constructor is called------------------------------------"<<endl;
            cout<<"string constructor is called where name is: "<<name<<endl;
        }

        Player::Player(string name_val_1, int health_1, int xp_1)
        : name{name_val_1}, health{health_1},xp{xp_1}
        {       
                cout<<"------------------------------------3 args constructor is called------------------------------------"<<endl;
                cout<<"Here name: "<<name_val_1<<" ,health: "<<health_1<<" ,xp: "<<xp_1<<endl;

        }

        void display_player_name (const Player &p){ // a function which plays with the const class

            cout<<"void function: "<<p.get_name()<<endl;
        }


int main(){
    // Player obj_player; // for no argument constructor
    // string main_name {};
    // cout<<"give here name: ";
    // cin>>main_name;
    // obj_player.set_name(main_name);
    // string get_name_return = obj_player.get_name();
    // cout <<"from get_name : "<<get_name_return<<endl;

    // Player hero{"hero"};
    // hero.set_name("here HERO");
    // third constructor will call
    // string name_3; int health_3; int xp_3;
    // cin>>name_3; cin>>health_3; cin>>xp_3;
    // Player third_constructor{name_3, health_3, xp_3};
    
    const Player villain {"villain", 21, 50};
    Player hero {"mmm", 12,40};

    cout<<"get name for const villain obj: "<<villain.get_name()<<endl;
    cout<<"get name for hero obj:"<<hero.get_name()<<endl;
    display_player_name(hero);
    display_player_name( villain);


    return 0;
}