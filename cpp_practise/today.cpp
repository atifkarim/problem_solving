#include<iostream>
using namespace std;

int main(){
    int x = 9;
    int *ptr {NULL};
    cout<<"val of x: "<<x<<" and ptr is: "<<&ptr<<" and: "<<ptr;
    cout<<"\nNow assigning val\n";
    ptr = &x;
    cout<<"val of x: "<<x<<" and address of x is: "<<&x<<" and ptr is: "<<&ptr<<" and: "<<ptr;
    cout<<"\nval where ptr is pointing to is: "<<*ptr<<endl;
    *ptr= 89;
    cout<<"val of x: "<<x<<" and address of x is: "<<&x<<" and ptr is: "<<&ptr<<" and: "<<ptr;
    cout<<"\nval where ptr is pointing to is: "<<*ptr<<endl;
    return 0;
}