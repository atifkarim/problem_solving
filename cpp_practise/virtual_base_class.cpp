/*
Suppose base class is A
Class B and C inherit class A
Class D inherits Class B and C.
So that means Class D has two copy of A , one came from Class B another from Class C
If right now Class D want to access any member of Class of A then ambiguity problem will occur
which meand that compiler cannot take decision which A it will take(from Class B OR Class C)
To remove this virtual Base Class concept used
source : https://www.geeksforgeeks.org/virtual-base-class-in-c/
*/
#include<iostream>
using namespace std;

class A{
    public:
        int i;
        void PrintA(){
            cout<<"I am printing the value of i from class A "<<i<<endl;
        }
};

class B:public A{
    public:
        void PrintB(){
            cout<<"I am the Class B who is child of class A and i know that value of i in A is: "<<i<<endl;
        }
};

class C:public A{
    public:
        void PrintC(){
            cout<<"I am Class C who is the child of class A and i know that value of i in A is: "<<i<<endl;
        }
};

// Now creating Class D who will inherit both Class B and C // multiple inheritance

class D:public B,public C{
    public:
        void PrintD(){
            cout<<"I am the class who possess the multiple inheritance and I know the the val of i in A is: "<<i<<endl;
        }

};

int main(){
    B obj_b;
    obj_b.i = 15;
    obj_b.PrintB();
    obj_b.PrintA();

    cout<<"\nNow the part of class D\n";
    D obj_d;
    obj_d.PrintD();
    
    return 0;
}