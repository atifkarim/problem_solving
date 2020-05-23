/*
function is defined outside of the class which helps to acquire less space in the memory of class 
*/

#include<iostream>

using namespace std;

class calculation{

public:
    int a,b;
    void add(int a, int b); // function definition

};

void calculation:: add(int a, int b){

    cout<<"In function: "<<a+b<<endl;
}


int main(){

    int x,y;
    cout<<"Enter two num: "<<endl;
    cin>>x;cin>>y;

    calculation calc_obj;
    calc_obj.a = x;
    calc_obj.b = y;
    
    calc_obj.add(x,y);

    return 0;
}