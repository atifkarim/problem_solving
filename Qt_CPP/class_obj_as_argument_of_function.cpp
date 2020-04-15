/*
Use object of class as an argument of function
*/

#include<iostream>
#include<string>
using namespace std;

class Summation{
    private: 
        int a; int b;
    public:
        Summation(int, int); // constructor declaration

        // As usual function
        int sum(int x, int y){
            int d = x+y;
            cout<<"op from public function SUM is: "<<d<<endl;
            cout<<"value coming from private member: a: "<<a<<" b: "<<b<<" and sum is: "<<a+b<<endl;
            return d;
        }

        ~Summation(){
            cout<<"Destructor is called\n"<<endl;
        }
};

// constructor is declaring
Summation::Summation(int q, int p){
    cout<<"\nHey constructor is called"<<endl;
    a =q; b = p;
}

// The following function contains the definition whrere object from class will come as argument
void obj_function(Summation obj_from_class){
    int GetValue;
    GetValue = obj_from_class.sum(6,5);
}

int main(){
    int j = 4; int k = 3;
    Summation obj_1(j,k);
    obj_1.sum(3,2);

    cout<<"now calling function which takes object as an argument"<<endl;

    obj_function(obj_1); // function calling by using CLASS object

    return 0;
}