/**
 * This file contains a simple class template with only constructor, No function
 * no derived class
 */


#ifndef _SAMPLE_CLASS_TEMPLATE_ONLY_CONSTRUCTOR_
#define _SAMPLE_CLASS_TEMPLATE_ONLY_CONSTRUCTOR_

#include <iostream>
using namespace std;

/**
 * a class template pure abstract class
 */
template <typename T>
class Base{ // Abstract class
    private:
        T base_a;

    public:
        int sx = 98;
        Base(T base_val):base_a(base_val){cout<<"base constructor is called with base_a: "<<base_a<<"\n";}
        virtual void Show(T data)=0; // pure virtual function
};

template <typename T>
class Derived_1 : public Base<T>{
    private:
        T derived_Variable;
    public:
        Derived_1(T a, T b):Base<T>{a}, derived_Variable{b}{
            cout<<"Derived_1 constructor is called with a: "<<a<<" ,b: "<<b<<" and then derived_Variable: "<<derived_Variable<<endl;
        }
        void Show(T data_derived) override;
};

/**
 * A sample class template
 */

template <typename T>
class DO_SUB{
    private:
        T x;
    public:
        int q = 34;
        DO_SUB(T val):x(val){cout<<"DO_SUB constructor is called and x: "<<x<<endl;}

        void Write(T data);

        ~ DO_SUB() {cout<<"DO_SUB Destructor is called when x: "<<x<<"\n";};
};

#endif