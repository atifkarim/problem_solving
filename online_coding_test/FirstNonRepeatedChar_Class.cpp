#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class NonRepeatingChar{

    private:
        // char *name_1;
        string name_1;
    public:
        // NonRepeatingChar(char *); // constructor for char
        NonRepeatingChar(string); // constructor for string


        int string_len;
        int count_1[256];
        // char char_array[string_len + 1];
        // int count[256] = {};
        
        // void count(){
        //     // int count[256] = {};
        //     string *p = name_1;
        //     while(string_len<=1){
        //         cout<<"count array: "<<count[*p]<<" ,and  *p: "<<*p<<" , and p: "<<p<<endl;
        //         ++count[*p++];
        //         // cout<<"-------count array: "<<count[*p]<<" ,and pointer p: "<<*p<<" , address: "<<p<<endl;

        //             }
        // }

        void count(){
            for(int a =0; i<string_len; i++){
                cout<<"count array: "<<count[a]<<" ,and string val: "<<name_1[a]<<endl;
                ++count[a];
            }
        }

        int count_stringlen(){

            string_len = name_1.length();
            // cout<<"lenth is: "<<string_len<<endl;

        }

        void display(){
            cout<<"val is: "<<name_1<<endl;
            count_stringlen();
            cout<<"length is: "<<string_len<<endl;
            // for(int i =0; i<string_len;i++){
            //     cout<<"str val is: "<<name_1[i]<<endl;
            // }
            // strcpy(char_array, name_1.c_str());
        };
};

NonRepeatingChar::NonRepeatingChar(string name){
// NonRepeatingChar::NonRepeatingChar(char name[]){ // just write string name OR char name []
    cout<<"constructor is called and val is: "<<name<<endl;
    name_1 = name;
}

int main(){

    NonRepeatingChar obj_1("Atif");

    obj_1.display();
    // obj_1.count_stringlen();

    
    return 0;
}