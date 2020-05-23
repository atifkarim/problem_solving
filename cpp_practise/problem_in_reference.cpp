#include<iostream>
using namespace std;

void increment (int &value){
    value = value+1;
}

void decrement (int *value){
    cout<<"val: "<<value<<endl;
    *value = *value-1;
}

int main(){

    int x {10};
    cout<<"before func: "<<x<<endl;

    increment(x);
    cout<<" after func increment: "<<x<<endl;

    decrement(&x);
    cout<<" after func decrement: "<<x<<endl;
    return 0;
}