/*
This code shows how to declare object as a pointer and access the member variable and function
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
    public:
    string name;
    int health;
    int xp;

    void talk(string name_1){

        cout<<"here I am public function: "<<name_1<<" , and I am private member>> name: "<<name<<endl;
    }

    void Print(){
        cout<<"name: "<<name<<" ,health: "<<health<<" ,xp: "<<xp<<endl;
    }

    void pointer_take (string name_2){

        cout<<"My "<<name_2<<" num is: "<<xp<<endl;
    }
    bool is_dead();
};


int main(){

    Player my_obj;
    my_obj.name = "Atif";
    my_obj.health=23;
    my_obj.xp=76;
    
    cout<<"\nPrinting Private memeber value only: \n";
    my_obj.Print();

    cout<<"\nPrinting public member funtion talk: \n";
    my_obj.talk("Mohammod");
    
    cout<<"\nPrinting member variable with Pointer: \n";
    Player *enemy = new Player;
    enemy ->name = "Pointer Atif";
    (*enemy).health = 34;
    enemy -> xp=89;
    enemy -> Print();

    cout<<"\nPrinting public member function pointer_take: \n";
    enemy -> pointer_take("Pointer Enemy");

    cout<<"\n*******************************"<<endl;
    my_obj.Print();
    delete enemy;


    return 0;
}