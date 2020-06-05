#include<iostream>
using namespace std;

char uppercase(char element){
    if ((element>='a')&&(element<='z'))
      element+='A'-'a';

      return element;
}

int main(){

    char b;
    cin>>b;
    cout<<"Return val from function uppercase is: "<<uppercase(b)<<endl;

    return 0;
}