/*
It is about the binary oprator overloading

source : https://www.youtube.com/watch?v=7QVvV-dkyvE&list=PLrKBFf87Cy9BVBAZ1Y-6Olzz0KTU4Qw6L&index=29

*/

#include<iostream>
using namespace std;

class multiply{
    int a, b;
    public:
        void getdata(int x, int y){
            a=x;
            b=y;
        }
        void display(){
            cout<<"The val of a = "<<a<<" ,b = "<<b<<endl;
        }

        multiply operator * (multiply c); // declaration of operator overloding function
};

multiply multiply::operator * (multiply c){ // definition of operator overloding function
    multiply temp;
    temp.a =a*c.a;
    temp.b =b*c.b;

    return temp;
}

int main(){
    multiply obj1, obj2, obj3;
    obj1.getdata(4,5);
    obj2.getdata(7,8);
    obj3 = obj1*obj2; // It can also bewritten as obj3 = obj1.operator*(obj2);
    obj3.display();

    return 0;

}