/*
Some incerement and decrement operator will be also try to introduce here
*/

#include <iostream>
using namespace std;

int main(){

    int x{10};
    while(--x>0){ // change between x-- and --x
        cout<<"val is now: "<<x<<endl;
    }

    cout<<"\nHere new things \n";
    int j = 11;
    cout<<"\nj is: "<<j<<" ,++j is: "<<++j<<" ,--j is: "<<j--<<endl;

    cout<<"\n\nAnother example\n\n";
    int a = 5;
    cout<<"post increment a++ : "<<a++<<" , and real val of a: "<<a<<endl;
    // reason is, initially a's val is 5. then during a++, compiler prints a's val and then incremented
    // Then the incremented val is updated and a's val is also updated
    // look the following with pre increment

    int b = 5;
    cout<<"pre increment ++b : "<<++b<<" , and real val of b: "<<b<<endl;
    // here, at first b's val is updated and then all printing occurs

    cout<<"\n\nNow something about pointers\n\n";
    int arr[] = {10,20};
    int *p = arr;
    cout<<"pointer p is pointing to the value: "<<*p<<endl;
    // now check with ++*p, *p++, *++p
    // ++*p;
    *p++;
    cout<<"val of arr[0]: "<<arr[0]<<" ,and arr[1]: "<<arr[1]<<endl;
    cout<<"After doing: "<<*p<<endl;

    return 0;
}