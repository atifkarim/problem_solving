#include<iostream>
#include <typeinfo>
using namespace std;

int * large_ptr(int *int_ptr_1, int* int_ptr_2){
    if (*int_ptr_1>*int_ptr_2)
        return int_ptr_1;
    else
        return int_ptr_2;

}


int * create_array(size_t size, int init_val = 0){

    int *new_storage {nullptr};

    new_storage = new int[size];
    for(size_t i{0};i<size;i++)
        *(new_storage+i)=init_val;
    
    return new_storage;
}

void display_array(const int *const array, size_t size){

    for(size_t i {0}; i<size ; i++){
        cout<<array[i]<<" ";
        }
    }

// void display_array()

int main(){

    cout<<"-------- RETURNING A PARAMETER------------"<<endl;
    int x {150}, y{250};
    int * func_ptr {nullptr};
    func_ptr = large_ptr(&x, &y);
    cout<<"large val from func is: "<<*func_ptr<<endl;

    cout<<"-----------------------RETURNING A DYAMICALLY ALLOCATED MEMORY---------------"<<endl;

    int *my_array {nullptr};
    size_t size;
    int init_val {0};

    cout<<"How many integers would you like to see?";
    cin>>size;
    cout<<"What will be the value of integers?";
    cin>>init_val;

    my_array = create_array(size, init_val);

    display_array(my_array,size);
    cout<<endl;
    cout << typeid(x).name() << endl;
    cout<<"\nnow: "<<sizeof my_array<<endl;
    delete [] my_array;

    return 0;
}