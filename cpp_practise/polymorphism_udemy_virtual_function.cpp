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

    cout<<"\nPointer calling\n";
    // We have seen from this piece of code the way of creating objets by using pointers
    Account *p1 = new Account();
    Savings *p2 = new Savings();
    Checking *p3 = new Checking();
    Trust *p4 = new Trust();

    p1-> withdraw(56.98);
    p2-> withdraw(56.98);
    p3-> withdraw(56.98);
    p4-> withdraw(56.98);

    // free the memory by delete method
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    cout<<"\nPointer calling with static binding\n";
    // We have seen from this piece of code the way of creating objets by using pointers
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

    cout<<"\nNow Base class Pointer is working. We will see the problem\n";
    Account *acc_obj_1;
    Savings sav_obj_1;
    acc_obj_1 = &sav_obj_1;
    acc_obj_1->withdraw(67.0); // Baseclass pointer is pointing to the address of savings class
                            // which is a derived class but still it is printing message from the base class body



    return 0;
}