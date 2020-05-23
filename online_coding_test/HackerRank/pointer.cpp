/*
https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?h_r=next-challenge&h_v=zen
*/

#include <stdio.h>
#include<iostream>

using namespace std;

void update(int *a,int *b) {
    cout<<"in function: "<<a<<"\t"<<b<<endl;
    int c = *a+*b;
    int d = *a-(*b);

    if (d<0){
        d = (-1)*(d);
    }

    cout<<"here: c= "<<c<<" \t d: "<<d<<endl;

    *a = c;
    *b = d;

    cout<<"Now: in function: "<<*a<<"\t"<<*b<<endl;


    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    // printf("%d\n%d", a, b);

    cout<<"Now: in main function: "<<a<<"\t"<<b<<endl;

    return 0;
}