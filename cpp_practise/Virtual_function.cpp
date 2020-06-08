/*
Suppose you have a restaurant and you always cook from your menu card. So you know how to make the dishes.
It is called Early Binding

But one day you have gone to a food fest where you think to use some new food. It is called Late Binding

source : https://www.youtube.com/watch?v=SF8HbxDbNr0
*/

#include<iostream>
using namespace std;

class A {
    public:
        virtual void Display(){
            cout<<"I am from class A\n";
        }
};

class B:public A{
    public:
        void Display(){cout<<"I am from class B\n";}
};

int main() {
    A *a; //pointer obj of class A
    B b; // obj of class B
    a = &b; // pointer a pointed to obj b which is an object of class B
    a->Display(); // Here thought is to print from class B but no !!!! why??
                    // it is called Early Binding
    /*
    The eason of this is that compiler does care about the "a" , not the address it is pointed
    to during the compilation. So, it is called Early Binding. If we give the preference to our desire 
    then we have to chose LATE BINDING. Then just add "virtual" keyword before the function of
    Base Class(Here it is A)*/

    /*How to print function of class A*/
    A *ptr = new A();
    ptr->Display();

    // the following method will also work

    B d; // Another obj of class B
    d.Display(); // Will show the content of class B , as both function name in base and derived class
    // are same then problem will occur which one will display. But compiler automatically chose class B
    d.A::Display(); // to print class A's content chose this method. It is something related to 
    // same_function_name_in_both_class.cpp which will be found in this report


    return 0;
    }
