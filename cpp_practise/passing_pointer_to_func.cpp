#include<iostream>
#include<vector>
using namespace std;

void double_data (int *int_ptr){

    *int_ptr *=2;
}

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(vector<string> *v){

    for(auto str:*v)
        cout<<str<<" ";
    cout<<endl;
}

void display_array(int *array, int end_point){
    while (*array !=end_point)
        cout<<*array++<<" ";
    cout<<endl;
}

int main(){

    int value {10};
    int *int_ptr {nullptr};

    cout<<"Value: "<<value<<endl;
    double_data(&value);
    cout<<"Value: "<<value<<endl;

    cout<<"------------------------------------"<<endl;

    int_ptr = &value;
    double_data(int_ptr);
    cout<<"value: "<<value<<endl;

    cout<<"----------------- SWAPING -----------------"<<endl;
    int x {100}, y{200};

    cout<<"value of x: "<<x<<" and y: "<<y<<" before calling swap function"<<endl;

    swap(&x, &y);
    cout<<"value of x: "<<x<<" and y: "<<y<<" after calling swap function"<<endl;

    cout<<"----------------- DISPLAYING VECTOR -----------------"<<endl;

    vector <string> vec_name {"Bremen", "Hamburg","Hannover"};
    display(&vec_name);

    cout<<"----------------- DISPLAYING VECTOR -----------------"<<endl;

    int score_array [] {100,90,25,32,-1};
    display_array(score_array,-1);
    return 0;
}