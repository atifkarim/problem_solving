/*
Code a stack data structure using cpp
source : https://www.youtube.com/watch?v=0jhUesQToOc&list=PLrKBFf87Cy9BVBAZ1Y-6Olzz0KTU4Qw6L&index=69
*/

#include <iostream>
using namespace std;

int array[5];
int top = -1;

void insert(){
    cout<<"I am called\n";
    int num;
    cin>>num;
    if (top==-1){
        top++;
        array[top] = num;
    }
    else if (top==4){
        cout<<"Stack is full"<<endl;
    }
    else{
        top++;
        array[top] = num;
    }

}

void remove(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"The number removed from array is: "<<array[top]<<" whose index was:  "<<top<<endl;
        --top;
    }
}

void display(){
    for(int i = 0; i<=top; i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n\n";
}

int main(){
    int option;
    do{
        cout<<"press 1 for insertion\n";
        cout<<"press 2 for deletion\n";
        cout<<"press 3 for display the stack\n";
        cout<<"press 4 to exit the program\n";

        cin>>option;
        switch (option){
            case 1 : insert();
                break;
            case 2 : remove();
                break;
            case 3 : display();
                break;
            default : cout<<"Wrong button is pressed\n";
                break;
        }
    }while(option!=4);

    return 0;
}