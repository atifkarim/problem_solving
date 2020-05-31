/*
This code helps us to know the use case of smart pointer
*/

#include<iostream>
#include<memory>
#include<vector>

using namespace std;

// #include "Account.h"
// #include "Checking_Account.h"
// #include "Trust_Account.h"
// #include "Savings_Account.h"

class Test{
    private:
        int data;
    public:
        Test(): data{0}{cout<<"Test constructor: "<<data<<endl;}
        Test(int data):data{data}{cout<<"Here Test constructor: "<<data<<endl;}
        int get_data() const {return data;}
        ~Test(){cout<<"Destructor is called for data: "<<data<<endl;}
};

int main(){
    /*Test t2; // No args constructor
    Test t1 {800}; // Single args constructor


    // Raw pointer which don't call destructor without using delete t3
    Test *t3 = new Test {900};
    delete t3;*/

    std::unique_ptr<Test> t4{new Test {450}}; // Smart pointer(c++11) whic don't require delete method to free the heap memory
    
    std::unique_ptr<Test> t5 = std::make_unique<Test> (1400); // c++14 style smart pointer
    return 0;
}
