/*
This code helps to learn how to use referncing for base class
*/

#include<iostream>
using namespace std;

class Account{
    public:
        virtual void withdraw(double amount){
            cout<<"In Withdraw:: Base Class Account is called where amount is: "<<amount<<endl;
        }
       virtual ~ Account(){cout<<"Account destructor is called"<<endl;}
};

class Savings:public Account{

    public:
        virtual void withdraw(double amount){
            cout<<"In Withdraw:: Derived Class Savings is called where amount is: "<<amount<<endl;
        }

       virtual ~ Savings(){cout<<"Savings destructor is called"<<endl;}
};

class Checking:public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"In Withdraw:: Derived Class Checking is called where amount is: "<<amount<<endl;
        }

       virtual ~ Checking(){cout<<"Checking destructor is called"<<endl;}
};

class Trust:public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"In Withdraw:: Derived Class Trust is called where amount is: "<<amount<<endl;
        }

       virtual ~ Trust(){cout<<"Trust destructor is called"<<endl;}
};

void do_withdraw(Account &account, double amount){
    account.withdraw(amount);
}

int main(){
    cout<<"\nCalling class function with referencing of base class\n";
    Account a;
    Account &ref = a;
    ref.withdraw(1000);
    

    Trust t;
    // t.withdraw(89.90);
    Account &ref_t = t; // Here, using reference of Base Class another Derived Class is calling  
    ref_t.withdraw(500);

    cout<<"\nBase Class is using to call Derived Class by using Reference operation where as driver\n";
    cout<<"a function named do_withdraw is used\n\n";
    Account a1;
    Savings s1;
    Checking c1;
    Trust t1;

    do_withdraw(a1,500);
    do_withdraw(s1,500);
    do_withdraw(c1,500);
    do_withdraw(t1,500);

    // You will see that here each time Base destructor will be called while a Derived class's
    // destructor is called

    cout<<"IF want to use any derived class without referencing base class\n";
    Trust t2;
    t2.withdraw(875);

    return 0;
}