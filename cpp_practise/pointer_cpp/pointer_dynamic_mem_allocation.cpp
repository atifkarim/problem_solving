#include<iostream>
#include<vector>
using namespace std;

int main(){

    int *int_ptr {nullptr};

    int_ptr = new int;

    cout<<int_ptr<<endl;
    cout<<&int_ptr<<endl;
    cout<<*int_ptr<<endl;
    cout<< sizeof int_ptr<<endl;

    delete int_ptr; // What actually is doing here?? It deletes the storage from the HEAP which is created by assignng "new" key variable.
                    // delete keyword don't delete the pointer. Still the pointer is pointed to the HEAP or dynamically allocated memory.

    cout<<int_ptr<<endl;
    cout<<&int_ptr<<endl;
    cout<<*int_ptr<<endl;
    cout<< sizeof int_ptr<<endl;

    cout << "-----------------------------------------"<<endl;
    size_t size {0};

    double *temp_ptr {nullptr};

    cout<<"How many temps?"<<endl;
    cin>>size;
    temp_ptr = new double[size];

    cout<<temp_ptr<<endl;

    delete [] temp_ptr; // concern about the empty square bracket



    return 0;
}
