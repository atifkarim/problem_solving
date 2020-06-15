/*
To get return value it can be used
std::async -- tell to create new thread
std::deferred -- tell not reate thread, just take entry to the function (slow process than async process)
source : https://www.youtube.com/watch?v=eTMY5zXits8&list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp&index=16
*/

#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <future>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;

ull findOdd(ull start, ull end){
    ull OddSum = 0;
    cout<<"Thread ID of findOdd is: "<<std::this_thread::get_id()<<endl;
    for(ull i =0;i<end;i++){
        if(i&1){
            OddSum += 1;
        }
    }
    return OddSum;
}

int main(){

    ull start = 0;
    ull end = 1900000000;

    cout<<"Thread ID here is: "<<std::this_thread::get_id()<<endl;

    cout<<"Thread Created"<<endl;
    auto startTime = high_resolution_clock::now();
    std::future<ull> OddFuture = std::async(std::launch::async,findOdd, start, end); // instead of async write
                                        // deferred. It will not create a thread and slow process

    cout<<"Waiting for Result"<<endl;
    cout<<"OddSum is: "<<OddFuture.get()<<endl;

    cout<<"Completed"<<endl;

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);
    cout<<"Duration to complete the process is:"<<duration.count()/1000000<<endl;

    return 0;
}