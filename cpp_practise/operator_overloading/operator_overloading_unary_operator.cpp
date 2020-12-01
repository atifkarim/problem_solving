/*
Suppose A male person getting married and then got a baby. Here Male person has two functionality.
One is Husband and other is Father. Here Paren, if the MALE person is a operator then havig two
functionality is called operator overloading. Here
Suppose, '+' sign can add numbers o increment. Now, 2+3 or 2++ is not a problem but
if we now want to add two obj from class then it will show problem. To give this functionality to this operator
we have to introduce Operator Overloading

source : https://www.youtube.com/watch?v=jcn70G4YhPw&list=PLrKBFf87Cy9BVBAZ1Y-6Olzz0KTU4Qw6L&index=28

*/

#include<iostream>
using namespace std;

class demo{
    int a, b, c;
    public:
        void getdata(int x, int y, int z){
            a=x;
            b=y;
            c=z;
        }
        void display(){
            cout<<"The val of a = "<<a<<" ,b = "<<b<<" ,c = "<<c<<endl;
        }

        void operator - (); // declaration of operator overloding function
};

void demo::operator-(){ // definition of operator overloding function
    a = -a;
    b = -b;
    c = -c;
}

int main(){
    demo obj;
    obj.getdata(10,20,30);
    obj.display();
    -obj; // set what to do with operator
    obj.display();

    return 0;
}