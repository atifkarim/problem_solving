// C++ program for implementation of Bubble sort 
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main(){

     std::array<int, 4> s = {40,30,20,10};

    std::sort(s.begin(), s.end());

    for(auto a: s){
        cout<<a<<" ";
    }

    int b[100];
    //Create a for loop to iterate 100 times

    for(int i=1;i<=100;i++)

    {

        /*Generate a random number between "1" and "1000" using rand() function*/

        b[i]=(rand() % 1000) + 1;

    }
    cout<<"\n\n";
    for(auto u : b){
        cout<<u<<" ";
    }
    cout<<"\n\n";

    // int b [] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(b)/sizeof(b[0]);
    sort(b, b+n);
    cout<<"\n\n";
    for(auto c:b){
        cout<<c<<" ";
    }

    

    return 0;
}