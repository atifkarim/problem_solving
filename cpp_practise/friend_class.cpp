/*
friend class is not in the scope of the class so class cannot control it.
This can be called as private or public no problem.

source : https://www.youtube.com/watch?v=CO1RekmsBac&list=PLrKBFf87Cy9BVBAZ1Y-6Olzz0KTU4Qw6L&index=37
*/

#include<iostream>
using namespace std;

class test{

    int data1, data2;
    // friend void multiply (test); // it is also possible. just commet out the declaration in public class
    public:
        test(int, int);

        void display(); // regular function declaration
        friend void multiply (test); // frind function declaration
};

void test::display(){ // regular function definition. look here it is under the scope of class
    cout<<"val is: "<<data1<<" and "<<data2<<endl;
}

void multiply(test t){ // friend fucntion definition which is not under the class scope
    int friend_data;
    friend_data = t.data1 * t.data2;
    cout<<"value after Multiplication: "<<friend_data<<endl;
}

test::test(int a, int b){
    data1 = a;
    data2 = b;
}

int main(){
    test obj(10,20);
    obj.display();
    multiply(obj); // friend function requires object to call itself
    return 0;
}