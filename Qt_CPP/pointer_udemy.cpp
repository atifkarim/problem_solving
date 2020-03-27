#include<iostream>
#include<vector>

using namespace std;

int main(){

    int num {12};

    cout<<"value of num is: "<<num<<endl;
    cout<<"size of num is: "<<sizeof num<<endl;
    cout<<"memory address of num is: "<<&num<<endl;

    cout<<"******************************************"<<endl;

    int *p = nullptr;
    // int *p {};
    cout<<"value of pointer p is: "<<p<<endl;
    cout<<"size of pointer p is: "<<sizeof p<<endl;
    cout<<"memory address of pointer p is: "<<&p<<endl;

    cout<<"******************************************"<<endl;

    int *q;
    cout<<"value of pointer q is: "<<q<<endl;
    cout<<"size of pointer q is: "<<sizeof q<<endl;
    cout<<"memory address of pointer q is: "<<&q<<endl;

    cout<<"******************************************"<<endl;

    p = &num;

    cout<<"value of num is: "<<num<<endl;
    cout<<"value of pointed POINTER p is: "<<p<<" & memory address of variable num is: "<<&num<<endl; // both o/p will be same
    cout<<"value pointed by POINTER p is: "<<*p<<endl;

    cout<<"NOW num value will be changed by using POINTER p"<<endl;
    *p = 30;
    cout<<"value of num is: "<<num<<endl;
    cout<<"value of pointed POINTER p is: "<<p<<" & memory address of variable num is: "<<&num<<endl; // both o/p will be same
    cout<<"value pointed by POINTER p is: "<<*p<<endl;

    cout<<"******************************************"<<endl;

    int high_temp {100};
    int low_temp {34};

    int * temp_pointer {};
    temp_pointer = &high_temp;
    cout<<"temp val is: "<<high_temp<<" and by pointer: "<<*temp_pointer<<endl;
    temp_pointer = &low_temp;
    cout<<"temp val is: "<<low_temp<<" and by pointer: "<<*temp_pointer<<" and high temp now: "<<high_temp<<endl;

    cout<<"******************************************"<<endl;

    vector <string> city_name {"Bremen", "Hamburg", "Hannover"};

    vector <string> *city_pointer {nullptr};
    city_pointer = &city_name;
    cout<<"fist city by vector itself: "<<city_name.at(0)<<endl;
    cout<<"first city name by POINTER: "<<(*city_pointer).at(0)<<endl;
    for (auto city:*city_pointer)
        cout<<city<<" "; // You can also give as usual {} braces after for loop
    
    cout<<endl;


    return 0;
}