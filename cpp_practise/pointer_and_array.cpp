#include<iostream>

using namespace std;


int main(){

    int scores [] {100,85,95};

    int * scores_ptr {scores};

    cout<<"value printing from array"<<endl;
    for (int i=0; i<3;i++){
        cout<<scores[i]<<" "<<endl;
    }

    cout<<"\nvalue printing from POINTER pointed to array"<<endl;
    // It is different from the pointer approach. Look it is not dereferencing rather it is a approach to use pointer as array

    for (int i=0; i<3;i++){
        cout<<scores_ptr[i]<<" "<<endl;
    }
    cout<<endl;

    cout<<"Accessing array value by dereferencing POINTER"<<endl;

    for (int i=0; i<3;i++){
        cout<<*(scores_ptr+i)<<" "<<endl;
    }

    cout<<"value of POINTER address and Memory address of Array"<<endl;
    cout<<"Pointer Address"<<"********"<<"Memory Adress of Array"<<endl;
    for (int i=0; i<3;i++){
        cout<<(scores_ptr+i)<<"*********"<<&(scores[i])<<endl;
    }

    cout<<"----------------LOOK THE FOLLOWING CODE IS COMPLETELY AS LIKE AS POINTER--------------------------------------"<<endl;
    for (int i=0; i<3;i++){
        cout<<*(scores+i)<<endl;
    }

    cout<<"Alter the value of the array suing pointer"<<endl;
    for (int a =0; a<3;a++){
        cin>>*(scores_ptr+a);
    }

    for (int i=0; i<3;i++){
        cout<<"val from pointer: "<<*(scores_ptr+i)<<" and val from the array now: "<<*(scores+i)<<endl;
    }

    return 0;
}