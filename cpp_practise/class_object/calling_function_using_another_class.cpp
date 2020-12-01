/*
a function from a class is calling from another function of another class.
Here, also shown how to use a pointer type object to access member variable and the necessity of sing dynamic memory
See also pointer_type_obj.cpp code
*/

#include<iostream>

using namespace std;

class do_add{

public:
    int a,b;
    void add(int a, int b); // function declaration

};

class do_all{
    do_add a1; // this line is important for calling a function from a different class

public:
    int c,d;
    void mul(int c, int d); // function declaration

};


void do_add:: add(int a, int b){ // function definition

    cout<<"I am the function from class do_add and I am doing a+b: "<<a+b<<endl;
}

void do_all:: mul(int c, int d){

    cout<<"In class do_all calling function mul: "<<c*d<<endl;
    cout<<"it is now calling a fucntion from class do_add"<<endl;
    a1.add(c, d);
}

int main(){
    
    cout<<"\nUsing pointer type OBJ\n";
    do_add *sum_obj = new do_add; // without using constructor
    int p,q;
    cout<<"Give value 2 number\n";
    cin>>p;cin>>q;
    sum_obj-> a = p;
    sum_obj-> b = q;
    cout<<"Sum here: "<<sum_obj-> a+sum_obj-> b<<endl;
    sum_obj -> add(p,q);
    delete sum_obj;

    int x,y;
    cout<<"Enter two num: "<<endl;
    cin>>x;cin>>y;

    do_add calc_obj;
    calc_obj.a = x; // unnecessary line
    calc_obj.b = y; // unnecessary line
    
    calc_obj.add(x,y);

    do_all all_obj;
    all_obj.mul(x=8,y=7);
    

    return 0;
}