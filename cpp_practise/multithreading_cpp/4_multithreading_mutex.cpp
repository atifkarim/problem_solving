/*
Mutex: To access a code mutually is called mutex.
Race Condition: If there is a two thread who wants to change/update a common variable then it is called race condition
Critical_selection/region: The protected section is called Critical_selection/region

source :https://www.youtube.com/watch?v=eZ8yKZo-PGw&list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp&index=4 
*/

#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

// int myAmmount = 0; // Uncomment this and also take necessary steps in the following lines(delete argument and
                        // local variable myAmmount to use global variable myAmmount)
std::mutex m;

// void add_val(){
//     ++myAmmount;
// }

// look right now there is race condition because both thread t1 and t2 occurs and there is always
// a slight difference between them who will comes first and then they just do the work(same work)
// it is not good. so we have to use lock and unlock to introduce mutex here. I am commenting the
// previous function and re-writing it as a new 

void add_val(int &myAmmount){ // delete this argument to use global variable myAmmount
    // We cannot say which thread will come at first
    m.lock();
    ++myAmmount; // critical section
    m.unlock();
}

int main(){
    int myAmmount = 0; // just uncomment this part to use gloabal variable myAmmount

    std::thread t1 (add_val, std::ref(myAmmount)); // just delete std::ref part to use gloabal variable myAmmount
    std::thread t2 (add_val, std::ref(myAmmount)); // just delete std::ref part to use gloabal variable myAmmount

    t1.join();
    t2.join();

    cout<<"My ammount is: "<<myAmmount<<endl;

    return 0;
}