/*
Work with publick access specifier in inheritance
*/

#include<iostream>
using namespace std;

class BaseClassA{
    int x;
    public:
        int GetValueA(){
            cout<<"Enter a Number: "<<endl;
            cin>>x;
            cout<<"value from BaseClass A is: "<<x<<endl;
            return x;
        }
        void PrintBaseClassA(){
            cout<<"return value from BaseClassA: "<<GetValueA()<<endl;
        }
};

class DerivedClassA:public BaseClassA{
    int B;
    public:
        void PrintDerivedClassA(int x){
            B=x;
            cout<<"value from DerivedClassB is: "<<B<<endl;
        }
};

int main(){
    BaseClassA obj_1;
    // obj_1.GetValueA();
    obj_1.PrintBaseClassA();
    cout<<"\nNow play with the derived class\n";
    DerivedClassA obj_2;
    cout<<"\nCalling public function of BaseClass A from DerivedClassB\n";
    obj_2.PrintBaseClassA();
    cout<<"\nNow calling public function of DerivedClassA where an argument will come from BaseClassA\n";
    obj_2.PrintDerivedClassA(obj_2.GetValueA());
    return 0;
}