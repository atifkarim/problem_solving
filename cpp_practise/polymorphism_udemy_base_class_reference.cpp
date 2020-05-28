#include<iostream>
using namespace std;

class Account{
    public:
        virtual void withdraw(double amount){
            cout<<"In Withdraw:: Base Class Account"<<endl;
        }
       virtual ~ Account(){cout<<"Account destructor is called"<<endl;}
};

class Savings:public Account{

    public:
        virtual void withdraw(double amount){
            cout<<"In Withdraw:: Derived Class Savings"<<endl;
        }

       virtual ~ Savings(){cout<<"Savings destructor is called"<<endl;}
};

class Checking:public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"In Withdraw:: Derived Class Checking"<<endl;
        }

       virtual ~ Checking(){cout<<"Checking destructor is called"<<endl;}
};

class Trust:public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"In Withdraw:: Derived Class Trust"<<endl;
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
    Account &ref_t = t;
    ref_t.withdraw(500);

    cout<<"\nUse referencing operation to call class function by using another class\n\n";
    Account a1;
    Savings s1;
    Checking c1;
    Trust t1;

    do_withdraw(a1,500);
    do_withdraw(s1,500);
    do_withdraw(c1,500);
    do_withdraw(t1,500);

    return 0;
}