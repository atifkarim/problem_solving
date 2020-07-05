/*
a function from a class is calling from another function of another class
*/

#include<iostream>

using namespace std;

class do_add{

public:
    int a,b;
    void add(int a, int b); // function definition

};

class do_all{
        do_add a1; // this line is important for calling a function from a different class

public:
    int c,d;
    void mul(int c, int d); // function definition

};


void do_add:: add(int a, int b){

    cout<<"I am the function from class do_add and I am doing a+b: "<<a+b<<endl;
}

void do_all:: mul(int c, int d){

    cout<<"In class do_all calling function mul: "<<c*d<<endl;
    cout<<"it is now calling a fucntion from class do_add"<<endl;
    a1.add(c, d);
}

int main(){

    int x,y;
    cout<<"Enter two num: "<<endl;
    cin>>x;cin>>y;

    do_add calc_obj;
    calc_obj.a = x;
    calc_obj.b = y;
    
    calc_obj.add(x,y);

    do_all all_obj;
    all_obj.mul(x=8,y=7);

    return 0;
}