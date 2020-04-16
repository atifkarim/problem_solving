#include <iostream>
#include <cstdio>
using namespace std;
/*
int main() {
    int i,c,b;
    // string a[11]={"even","odd","one","two","three","four","five","six","seven","eight","nine"};
    string a[9]={"one","two","three","four","five","six","seven","eight","nine"};
    cin>>c>>b;
    for(i=c;i<=b;i++)
    {
        if((i>9) && (i%2==0))  cout<<"even"<<endl;//cout<<a[0]<<endl;
        else if((i>9) && (i%2!=0)) cout<<"odd"<<endl;
        else    cout<<a[i-1]<<endl;
    }
    return 0;
}*/


int main(){

    string a[9]={"one","two","three","four","five","six","seven","eight","nine"};
    int c,b;
    cin>>c;
    cin>>b;
    // cout<<"type: "<<a[6]<<endl;

    for (int i =c;i<=b;i++){

        if ((i>9) && (i%2==0)) {
            cout<<"even"<<endl;
  // block of code to be executed if condition1 is true
    } else if ((i>9) && (i%2!=0)) {
        cout<<"odd"<<endl;
  // block of code to be executed if the condition1 is false and condition2 is true
    } else {
        cout<<a[i-1]<<endl;

  // block of code to be executed if the condition1 is false and condition2 is false
    }

    }

    return 0;
}