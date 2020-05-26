#include<iostream>
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
    return 0;
}