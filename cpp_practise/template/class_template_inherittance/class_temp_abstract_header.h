#ifndef _Do_
#define _Do_

#include <iostream>
using namespace std;

/**
 * class template with virtual function */

template<typename T = int>
class Base
{
protected:
    T base_Variable;

public:
    Base(T x):base_Variable{x}{
        std::cout<<"Base Class Constructor is called and Mem Var: "<<base_Variable<<std::endl;
    }
    // virtual void do_something(T val) = 0;

    ~Base() {}
};

class Der : public Base<int>
{
    public:
        Der(int a, int b):Base<int>{b}, derived_Variable{a}{}
        void show_der_val();
        // void do_something(int);

        ~Der(){}

    private:
        int derived_Variable;

};

#endif