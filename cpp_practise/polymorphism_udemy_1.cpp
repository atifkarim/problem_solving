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
    ptr -> say_hello();

    // Introducing smart pointer
    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    ptr1->say_hello();

    delete ptr;

    return 0;
}