/*
https://www.hackerrank.com/challenges/arrays-introduction/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cout<<"Total content: ";
    cin>>N;
    int val;
    cout<<"Now give the value: "<<endl;
    vector<int> first;
    for (int i =0; i<N; i++){
        cin>>val;
        first.push_back (val);
    }

    cout<<"-------------------------------------------"<<endl;
    for (int i=0;i<N;i++){
        cout<<first[i]<<endl;
    }

    cout<<"----------------- REVERSE ORDER --------------------------"<<endl;
    int M = N;
    for (int i =0;i<N;i++){
        cout<<first[M-1]<<" ";
        M = M-1;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
