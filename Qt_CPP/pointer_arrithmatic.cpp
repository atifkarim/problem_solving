#include<iostream>

using namespace std;

int main(){


    char name[] {"Frank"};

    char * char_ptr_1 {nullptr};
    char * char_ptr_2 {nullptr};

    char_ptr_1 = &name[0];
    char_ptr_2 = &name[3];

    cout<<"Difference between pointing address"<<endl;
    cout<<"In charecter "<<name<<" ,"<<*char_ptr_1<<" is "<<(char_ptr_2-char_ptr_1)<<" away from "<<*char_ptr_2<<endl;


    return 0;
}