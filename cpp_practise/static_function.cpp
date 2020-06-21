/*
This code shows about static member function in c++
*/

#include<iostream>
using namespace std;

class demo {
    static int count; // static member is declared whose initial value is by default zero.
    public:
        demo(int);
        void increase_count(){
            count++;
        }

        static void counter_show(){ // static member function which can only access static member
                                    // It can also accessed by class
            cout<<"Conter value: "<<count<<endl;
        }
};

// If you need then can add a constructor like the following way, though a static member variable value is
// by default ZERO
demo::demo(int x){
    count = x;
}

int demo::count;

int main(){

    demo obj(1);
    obj.increase_count();
    obj.increase_count();
    demo::counter_show(); // This and the following lines both are valid
    // obj.counter_show();

}