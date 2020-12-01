/*
Accessing public and private member and function
*/

#include<iostream>
using namespace std;

class A {

    private:
        int a,b;
    public:
        int d,f;
        void add();
        void mul ();
};

void A::mul(){

cout<<"mul: "<<d*f<<endl;

}


void A::add(){
    int a {6}; int b {2};
    cout<<"sum: "<<a+b<<endl;
}

int main(){

    A obj_a;
    obj_a.add();
    obj_a.d =4;
    obj_a.f =3;
    obj_a.mul();
    return 0;
}