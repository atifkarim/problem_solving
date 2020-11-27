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
        
        void set_name(string name_val){
            name = name_val;
            cout<<"from set name func I am saying my name is: "<<name <<endl;

        }

        string get_name(){
            return name;
        }
};

// Constructors are calling
// Initilaizer will be added in the constructor list
        Player::Player()
        : name{"None"}, health{0},xp{0}
        {
            cout<<"no arg constructor"<<endl;
        }

        Player::Player(string name_val)
        : name{name_val}, health{0},xp{0}
        {
            cout<<"string constructor is called where name is: "<<name<<endl;
        }

        Player::Player(string name_val_1, int health_1, int xp_1)
        : name{name_val_1}, health{health_1},xp{xp_1}
        {
                cout<<"Here name: "<<name_val_1<<" ,health: "<<health_1<<" ,xp: "<<xp_1<<endl;

        }


int main(){
    Player obj_player; // for no argument constructor
    string main_name {};
    cout<<"give here name: ";
    cin>>main_name;
    obj_player.set_name(main_name);
    string get_name_return = obj_player.get_name();
    cout <<"from get_name : "<<get_name_return<<endl;

    Player hero{"hero"};
    hero.set_name("here HERO");
    // third constructor will call
    string name_3; int health_3; int xp_3;
    cout<<"Give name_3: ";
    cin>>name_3; 
    cout<<"Give value health_3: ";
    cin>>health_3;
    cout<<"Give xp_3: ";
    cin>>xp_3;
    Player third_constructor{name_3, health_3, xp_3};
    

    return 0;
}