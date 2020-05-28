#include<iostream>
using namespace std;

class Account{
    public:
        void withdraw(double amount){
            cout<<"In Withdraw:: Base Class Account"<<endl;
        }
};

class Savings:public Account{

    public:
        void withdraw(double amount){
            cout<<"In Withdraw:: Derived Class Savings"<<endl;
        }
};

class Checking:public Account{
    public:
        void withdraw(double amount){
            cout<<"In Withdraw:: Derived Class Checking"<<endl;
        }
};

class Trust:public Account{
    public:
        void withdraw(double amount){
            cout<<"In Withdraw:: Derived Class Trust"<<endl;
        }
};

int main(){

    Account acc_obj;
    acc_obj.withdraw(80.9); // This prints the value from the base class

    Savings sav_obj;
    sav_obj.withdraw(90.98); // Here, derived class obj sav_obj is binded to only his own function as both
                            // function's name in base and derived classes are same.
    sav_obj.Account::withdraw(89.456); // And now here I have manipulated function's name.
                                    // If function's has same name then accessing will follow this rules


    return 0;
}