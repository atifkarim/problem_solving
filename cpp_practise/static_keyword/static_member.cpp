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

int static_class::x; // most imp line for static member
int static_class::y; // most imp line for static member

int main(){

    static_class smp1, smp2;

    smp1.set_value(100,200); // Using this line smp1 obj used to set the value of static variable x , y
    smp1.print_info(); // So it can print
    smp2.print_info(); // But look smp2 obj hasn't set any value but still can print because x, y is static 
                        //and already got value by smp1

    smp2.set_value(900,98); // Now smp2 changed value of x,y
    smp2.print_info(); // SO, printing
    smp1.print_info(); // But look smp1 is now also printing and using the latest value

    return 0;
}