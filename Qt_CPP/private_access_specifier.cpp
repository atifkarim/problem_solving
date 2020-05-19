/*
How to access private member of base class from derived class
*/

#include<iostream>
using namespace std;

class BaseClass1{
    int PrivateA;
    public:
        int GetValue(){
            cout<<"Please Assign a value"<<endl;
            cin>>PrivateA;
            return PrivateA;
        }
        void printvalueA(){
            cout<<"Private value from base class: "<<PrivateA<<endl;
        }
};

class DerivedClass1:private BaseClass1{
    private:
        int PrivateB;
    public:
        void printvalueB(){
            PrivateB = GetValue();
            cout<<"Private B value is: "<<PrivateB<<endl;
        }
};


int main(){
    BaseClass1 obj_1;
    obj_1.GetValue();
    obj_1.printvalueA();

    DerivedClass1 obj_2;
    obj_2.printvalueB();
    // int t = obj_2.GetValue(); // It will be error as the class is derived as a private acess specifier

    return 0;
}