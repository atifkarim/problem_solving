/*
Trying to use template abstract class
*/

#include <iostream>
using namespace std;

/**
 * In first part member variable of Base class is setup by Derived Class
 * */

template<typename T>
class Base
{
public:
    Base<T>(int x):base_Variable{x}{
        cout<<"Base Class Constructor is called and Mem Var: "<<base_Variable<<endl;
    }
    virtual void do_something() = 0;
    protected:
        T base_Variable;
};

// the only right way of inheriting template to template 

class Der : public Base<int>
{
    public:
        Der(int a, int b):Base<int>{b}, derived_Variable{a}{}
        void show_der_val();
        void do_something();

    private:
        int derived_Variable;

};

void Der::Der::show_der_val(){
    cout<<"val of derived class private mem is: "<<derived_Variable<<endl;
}

void Der::do_something(){
    cout<<"Just Printing\n";
}


int main(){

    Der obj_der(9,3);
    obj_der.show_der_val();
    obj_der.do_something();
    return 0;
}