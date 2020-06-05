#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
    private:
        string name;
        int health;
        int xp;
    public:
        Player(string name = "NONE", int health = 0, int xp = 0);

        void talk(string name_1){

        cout<<"here I am: "<<name_1<<" what is told by: "<<name<<endl;
        }

    void pointer_take (string name_2){

        cout<<"My "<<name_2<<" num is: "<<xp<<endl;
    }
    bool is_dead();
};

Player::Player(string name_val_1, int health_1, int xp_1)
        : name{name_val_1}, health{health_1},xp{xp_1}
        {       
                cout<<"------------------------------------3 args constructor is called------------------------------------"<<endl;
                cout<<"Here name: "<<name_val_1<<" ,health: "<<health_1<<" ,xp: "<<xp_1<<endl;

        }

class Account{
    public:
        string name;
        double balance;

        bool deposit(double bal){balance += bal;cout<<"in deposit balance is: "<<balance<<endl;}
        bool withdraw (double bal){balance -= bal;cout<<"in withdraw balance is: "<<balance<<endl;}

};


int main(){

    Player frank("Atif", 25,50);
    Player hero("Ashraf", 54,87);

    Player players[] {frank, hero}; // players is an array of Player OBJECT or frank and hero objects.

    vector<Player> player_vec {frank}; // vector declaration whose type is Player class and initialized with the value of 'frank'
    player_vec.push_back(hero);

    // string a_1 {"Atif"}
    // frank.name = "My_NAME"; // it is setting the variable value inside of the class from main function
    frank.talk("Tanbir"); // it is accessing the function of the class from the main function
    hero.talk("Alam");
    // frank.xp = 12; 

    cout<<"\nPointer obj is using to call the member function";
    Player *enemy = new Player("Karim",45,21); // OBJECT calling as pointer
    // enemy = new Player;
    // (*enemy).name = "Enemy";
    // (*enemy).health = 500;
    // enemy -> xp = 15;

    enemy->pointer_take("Enemy");

    delete enemy;


    cout << "------------------------------------------------------------------------------"<<endl<<endl;

    Account frank_account;
    frank_account.name = "FRank's Account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000.0);
    frank_account.withdraw(4000.0);


    return 0;
}