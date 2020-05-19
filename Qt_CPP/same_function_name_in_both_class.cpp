/*
If there is both members name is same in base and derived class then how member function will be called from derived class
Or, How derived class will be differentiated between both function who has same name?
*/

#include<iostream>
using namespace std;

class BaseClassA{
    public:
        void ShowMessage(){
            cout<<"I am from the base class"<<endl;
        }
};
class DerivedClassA:public BaseClassA{
    public:
        void ShowMessage(){
            cout<<"Hi I am from the derived class"<<endl;
        }
};

int main(){
    DerivedClassA obj_2;
    obj_2.ShowMessage(); // This will access function from the derived class
    obj_2.BaseClassA::ShowMessage(); // This will access the function from the base class
    return 0;
}