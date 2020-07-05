/*
https://www.youtube.com/watch?v=BbEQvsnMYDM
*/

#include<iostream>
using namespace std;

int main(){

    int check = 0;

    char str[] = "AAAttffFFx";

    int count[256] = {}; // also zero works

    // for(int a = 0; a < 256; ++a){
    //     cout<<"val is: count["<<a<<"]: "<<count[a]<<endl;
    // }
    char *p = str;
    while(*p){
        cout<<"count array: "<<count[*p]<<" ,and  *p: "<<*p<<" , and p: "<<p<<endl;
        ++count[*p++];
        // cout<<"-------count array: "<<count[*p]<<" ,and pointer p: "<<*p<<" , address: "<<p<<endl;

    }
    // for(int i=0; count[i]!=0;i++){
    //     cout<<"I am array: "<<count[i]<<endl;
    // }

    p = str;
    cout<<"Who am i right now >> p: "<<p<<" and val of p: "<<*p<<" and str is: "<<str<<endl;

    while(*p){
        // cout<<"Initiallay here val is: "<<*p<<" , and array here is: "<<count[*p]<<endl;
        if(1==count[*p]){
            cout<<"------------------------------------------------------"<<endl;
            cout<<"here val is: "<<*p<<" , and array is: "<<count[*p]<<endl;
            cout<<"first non repeated charecter is: "<<*p<<endl;
            check+=1;
            break;
        }
        p++;
        
    }
    // cout<<"finished";
    if(check==0){
        cout<<"passed string is Empty of All charecters are repeated"<<endl;
    }

    return 0;
}