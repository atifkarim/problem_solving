/*
friend class is not in the scope of the class so class cannot control it.
This can be called as private or public no problem.
https://www.geeksforgeeks.org/difference-between-private-and-protected-in-c-with-example/#:~:text=Protected-,The%20class%20members%20declared%20as%20private%20can%20be%20accessed,the%20functions%20inside%20the%20class.&text=of%20a%20class.-,The%20class%20member%20declared%20as%20Protected%20are%20inaccessible%20outside%20the,derived%20class)%20of%20that%20class.

source : https://www.youtube.com/watch?v=CO1RekmsBac&list=PLrKBFf87Cy9BVBAZ1Y-6Olzz0KTU4Qw6L&index=37
*/

#include<iostream>
using namespace std;

class test{
    private:
        int data1, data2;
        // friend void multiply (test); // it is also possible. just commet out the declaration in public class
    protected:
        int protect_data;
    public:
        test(int, int, int);

        void display(); // regular function declaration
        friend void multiply (test); // frind function declaration
};

void test::display(){ // regular function definition. look here it is under the scope of class
    cout<<"private member value is: "<<data1<<" and "<<data2<<endl;
    cout<<"protected memebr value is: "<<protect_data<<endl;
}

void multiply(test t){ // friend fucntion definition which is not under the class scope
    int friend_data;
    friend_data = t.data1 * t.data2 + t.protect_data;
    cout<<"value after Multiplication by friend function is: "<<friend_data<<endl;
}

test::test(int a, int b, int c){
    data1 = a;
    data2 = b;
    protect_data = c;
}

int main(){
    test obj(10,20, 30);
    obj.display();
    multiply(obj); // friend function requires object to call itself
    return 0;
}