// While a constructor can deal the other constructor
// Former version you can see in the constructor_initialization_list.cpp

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
        Player(string, int);
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

Player::Player(string name_val, int health_val)
: Player{name_val,health_val,0}
{   
cout<<"------------------------------------2 args constructor is called------------------------------------"<<endl;
cout<<"string called where name is: "<<name<<" and, health val from constructor is: "<<health_val<<endl;
}

Player::Player(string name_val_1, int health_1, int xp_1)
: name{name_val_1}, health{health_1},xp{xp_1}
{       
    cout<<"------------------------------------3 args constructor is called------------------------------------"<<endl;
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

    cout<<"\nCalling constructor who has 1 argument\n";
    Player hero{"hero"}; // Single constructor is calling
    hero.set_name("here HERO");

    cout<<"\ncalling constructor who has 2 arguments"<<endl;
    Player hero_2{"Mohammod", 58};

    cout<<"\ncalling constructor who has 3 arguments"<<endl;
    string name_3; int health_3; int xp_3;
    cin>>name_3; cin>>health_3; cin>>xp_3;
    Player third_constructor{name_3, health_3, xp_3};
    

    return 0;
}