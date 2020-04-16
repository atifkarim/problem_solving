/*
take 4 integer as argumrnt to a function and find out the max number
https://www.hackerrank.com/challenges/c-tutorial-functions/problem?h_r=next-challenge&h_v=zen
*/

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/


int max_of_four(int w, int x, int y, int z){
    // int a[4]= {w,x,y,z};
    // int size_a = (sizeof(a)/sizeof(*a));
    // cout<<"size: "<<(sizeof(a)/sizeof(*a))<<endl<<endl;

    // for (int i = 0; i<size_a;i++){
    //     cout<<"content: "<<a[i]<<endl;
    // }
    int s,t;
    if (w>x){
        s=w;
    }
    else
    {
        s = x;
    }

    

    if (y>z){
        t=y;
    }
    else
    {
        t = z;
    }


    
    if (s>t){
        return s;
    }
    else
    {
        return t;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}