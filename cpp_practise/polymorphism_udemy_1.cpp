/*
In this code I am trying to lear about polymorphism from Udemy Course
*/

#include<iostream>
#include<memory>
using namespace std;

class Base{
    public:
        void say_hello() const {
            cout<<"Hello I am Base Class"<<endl;
        }
};

class Derived:public Base{
    public:
        void say_hello() const {
            cout<<"Hello I am Derived Class"<<endl;
        }
};

void greetings(const Base &obj){
    cout<<"Greetings: ";
    obj.say_hello();
}

int main(){
    Base b;
    Derived d;
    b.say_hello();
    d.say_hello();

    greetings(b);
    greetings(d);

    // Introducing pointer

    Base *ptr = new Derived();
    ptr -> say_hello(); // Here you will see that it is printing the base class, not the derived class

    // Introducing smart pointer
    
    // std::unique_ptr<Base> ptr1 {new Derived()}; // c++11 style

    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>(); // c++14 style
    // auto ptr1 = make_unique<Derived>(); // c++ 14 style. But this one directly fetch derived class o/p. Without virtual keyword
    
    ptr1->say_hello(); // same case will be here also. It is for Early Binding concept.
    // If we use 'virtual' keyword in front of the return type of base class function then this problem will be solved
    // An example is available at Virtual_function.cpp code

    delete ptr;

    return 0;
}