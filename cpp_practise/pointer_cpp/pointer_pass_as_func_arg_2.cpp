#include <iostream>
using namespace std;

int main(){
    int array[5]{15,25,35,45,55};
    int* ptr1;
    int** ptr2;

    ptr1 = &array[0];
    ptr2 = &ptr1;

    cout<<"val of array's first element is "<<array[0]<<" and address is: "<<&array[0]<<endl;
    cout<<"\nAnd by pointer ptr1 is: "<<*ptr1<<" and pointed to: "<<ptr1<<" and lives at: "<<&ptr1<<endl;
    cout<<"\nAnd by pointer ptr2 is: "<<**ptr2<<" and pointed to: "<<ptr2<<" and lives at"<<&ptr2<<endl;

    for(int i =0; i<5; i++){
        cout<<"the value: "<<*(ptr1+i)<<" lives at "<<ptr1+i<<" address\n";
    }
    cout<<"\n";
    for(int j=0; j<5; j++){
        // cout<<": "<<**(ptr2)<<" lives at "<<&ptr2<<" address\n";
        cout<<"adress of array: "<<&array[j]<<" , ptr1: "<<(ptr1+j)<<" , val of ptr2: "<<*(ptr2+j)<<endl;
    }

    cout<<"\n";
    return 0;
}