/*
https://www.youtube.com/watch?v=9Rgnl4o0Vv8
*/

#include<iostream>
using namespace std;
int main(){
    unsigned int i = 1;
    char *c = (char*)&i;
    if(*c){
        cout<<"Little Endian"<<endl;
    }
    else
    {
        cout<<"Big Endian\n";
    }
    return 0;
}
