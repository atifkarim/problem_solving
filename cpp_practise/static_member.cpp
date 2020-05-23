/*
Reason of using static memner is to use same variable value by all object from the class
*/
#include<iostream>
using namespace std;

class static_class{
    static int x,y;

    public:
        void set_value(int a, int b){x=a; y=b;}

        void print_info(){
            cout<<"value x: "<<x<<" y: "<<y<<endl;
        }

};

int static_class::x; // most impline for static member
int static_class::y; // most impline for static member

int main(){

    static_class smp1, smp2;

    smp1.set_value(100,200);
    smp1.print_info();
    smp2.print_info();

    smp2.set_value(900,98);
    smp1.print_info();
    smp2.print_info();

    return 0;
}