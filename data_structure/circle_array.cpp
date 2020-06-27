#include<iostream>
using namespace std;

int main(){

    int a[10] = {10,20,30,40,50,60,70,80,90,15};

    int s = sizeof(a)/sizeof(a[0]);
    cout<<"size is: "<<s<<endl;

    for(int i =0; i<s;++i){
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    cout<<"Now print the array with a circular manner\n";
    for(int j = 0; j<s*2;++j){
        cout<<"a["<<j<<"]: "<<a[j%s]<<endl;
    }
    return 0;
}