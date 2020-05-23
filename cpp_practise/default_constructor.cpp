#include<iostream>
#include<string>

using namespace std;

class Player{
    private:
        string name;
        int health;
        int xp;
    public:
    // Player(string);
        
        void set_name(string name_val){
            name = name_val;
            cout<<"from set name func I am saying my name is: "<<name <<endl;

        }

        string get_name(){
            return name;
        }
// Constructors are calling
        Player(){
            cout<<"no arg constructor"<<endl;
        }

        Player(string name){
            cout<<"string constructor is called where name is: "<<name<<endl;
        }

        


};
// Like the following way it is possible to call constructor but then you have to again call constructor from the public
// using Player(string) in this way. look line number 12

// Player::Player(string name){
//             cout<<"string constructor is called"<<endl;
//         }

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
    string get_name_1= hero.get_name();
    cout<<"from get name 1: using constructor: "<<get_name_1<<endl;
    

    return 0;
}