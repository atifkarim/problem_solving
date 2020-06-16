/*
https://www.youtube.com/watch?v=gx7o7T2Kqls

*/

#include<iostream>
using namespace std;

// sample 1
auto add(int a, int b){return a+b;}

decltype(auto) increment(int& a){
    a++;
    return a;
}


int main(){

    int x,y;
    cout<<"GIve two value\n";
    cin>>x; cin>>y;
    cout<<"Result is: "<<add(x,y)<<endl;

    cout<<"Now the usecase of decltype(auto)"<<endl;

    int p = 87;

    cout<<"Result is : "<<increment(p)<<endl; // till now no prb will occur. function type auto works here.
    // but prb will come now
    int & e = increment(p); // Now we want something that is not int, so use decltype(auto)
    cout<<"Now the incremented val is: "<<e<<endl;
    return 0;
}