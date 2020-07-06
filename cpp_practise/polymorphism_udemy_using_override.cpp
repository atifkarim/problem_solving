/*
In this code I have used override concept from c++11
*/

#include<iostream>
using namespace std;

class Account{
    public:
        virtual void withdraw (double amount) const{
            cout<<"In Withdraw:: Base Class Account"<<endl;
        }
       virtual ~ Account(){cout<<"Account destructor is called"<<endl;}
};

class Savings:public Account{

    public:
    // In the following lines if I write only const then also it will act as virtual function.
    // Then why extra override using?? Because, if we always use this keyword then somehow if we forget 
    // to override base function/virtual function to derived class's fucntion then compiler easily will show
    // us the error and then we can resolve it.
    
        virtual void withdraw(double amount) const override {
            cout<<"In Withdraw:: Derived Class Savings"<<endl;
        }

       virtual ~ Savings(){cout<<"Savings destructor is called"<<endl;}
};
/*
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

*/

int main(){
    Account *p1_1 = new Account();
    Account *p2_1 = new Savings();
    /*
    Account *p3_1 = new Checking();
    Account *p4_1 = new Trust();
    */
    Savings *sptr = new Savings();
   
    cout<<"\nPrinting the function\n\n";
    p1_1-> withdraw(56.98);
    p2_1-> withdraw(56.98);
    sptr-> withdraw(125.54);
    /*
    p3_1-> withdraw(56.98);
    p4_1-> withdraw(56.98);
    */

    // free the memory by delete method
    cout<<"\nClean the Memory\n\n";
    delete p1_1;
    delete p2_1;
    delete sptr;
    /*
    delete p3_1;
    delete p4_1;
    */
    return 0;
}