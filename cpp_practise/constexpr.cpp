/*
https://www.youtube.com/watch?v=frifFlPO_uI

Using constexpr specifier it is possible to evaluate the value of a function or variable at compile time

*/

#include<iostream>
using namespace std;

constexpr int add (int a, int b){

    return a+b;
}

int main(){
    /*The following example do the calculation in run time as it needs value from the input*/
    int x,y;
    cout<<"give two value\n";
    cin>>x; cin>>y;
    cout<<"res is: "<<add(x,y)<<endl;

    /*But if there anything which can do the calculation in compile time then time could be saved
    for example: add(3,5), just write it and print the result. But without constexpr it is not possible
    So follow the following lines. And also remember, if code requires value from the user then it is not
    possible to do calculation in compile time*/

    cout<<"Now the result is: "<<add(8,5)<<"\n"; // This line is now using constexpr
    return 0;
}