/*
copy constructor practsiing from bangla c++ book
*/

#include<iostream>
#include<string.h>

using namespace std;

class TestCopyConstructor{
    public:
    TestCopyConstructor();
        char *p;

        void print(void){
            cout<<"passed pointer val is: "<<p<<" and length is: "<<strlen(p)<<endl;
        }

        // TestCopyConstructor(){
        //     cout<<"Is there anything happened??"<<endl;
        //     p = new char[50];
        //     cout<<"what is : "<<p<<endl;
        // }

        TestCopyConstructor(TestCopyConstructor &); // copy constructor declare
};

// if define constructor as the following way then you have to use line 12. Otherwise, comment line 12 and the following lines.
// uncomment line 19 to 24
TestCopyConstructor::TestCopyConstructor(){
            cout<<"Is there anything happened??"<<endl;
            p = new char[50];
            cout<<"what is : "<<p<<endl;
        }

// defining copy constructor

TestCopyConstructor::TestCopyConstructor(TestCopyConstructor & str){
    strcpy(p, str.p);  
}

int main(){

    TestCopyConstructor obj_1;
    // obj_1.p = "Atif";
    strcpy(obj_1.p, "Atif");
    cout<<"Before Assigning Copy constructor"<<endl;
    obj_1.print();

    TestCopyConstructor obj_2 = obj_1;
    strcpy(obj_2.p, "Sharmila Akter");
    cout<<"After assiging"<<endl;
    obj_1.print();
    obj_2.print();

    return 0;
}