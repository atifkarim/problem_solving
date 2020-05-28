/*
In this code I have used vritual destructor concept
*/

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



int main(){
    Account *p1_1 = new Account();
    Account *p2_1 = new Savings();
    Account *p3_1 = new Checking();
    Account *p4_1 = new Trust();

    p1_1-> withdraw(56.98);
    p2_1-> withdraw(56.98);
    p3_1-> withdraw(56.98);
    p4_1-> withdraw(56.98);

    // free the memory by delete method
    delete p1_1;
    delete p2_1;
    delete p3_1;
    delete p4_1;
    return 0;
}