/*
If want to get any value from the threading to mai function then use std::promise and std::future

std::promise -- Used to set value/ exceptions
std::future -- Used to get value from promise
                Ask promise if the value is available
                Wait for the promise
source : https://www.youtube.com/watch?v=XDZkyQVsbDY&list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp&index=15
*/

#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
#include <future>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;

void findOdd(std::promise<ull> && OddSumPromise, ull start, ull end){
    ull OddSum = 0;
    for(ull i =0;i<end;i++){
        if(i&1){
            OddSum += 1;
        }
    }
    OddSumPromise.set_value(OddSum);
}

int main(){

    ull start = 0;
    ull end = 1900000000;

    std::promise<ull> OddSum;
    std::future<ull> OddFuture = OddSum.get_future();

    cout<<"Thread Created"<<endl;
    std::thread t1(findOdd, std::move(OddSum), start, end);

    cout<<"Waiting for Result"<<endl;
    cout<<"OddSum is: "<<OddFuture.get()<<endl;

    cout<<"Completed"<<endl;
    t1.join();

    return 0;
}