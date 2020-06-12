/*
What is multithreading?? How it works? Example...
source: https://www.youtube.com/watch?v=TPVH_coGAQs&list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp

In every application there is default thread which is main() function. Inside of this we can create the other threads
A thread is also known as lightweight process. Idea is achieve parallelism by dividing a process into multiple threads.


Example:
    1/ Browser have multiple tabs can be compared to different threads
    2/ MS word use multiple threads, such as, one for formatting the text, another for checking spelling
    3/ VS code can use threading to do auto-completion

# Way to create Threading in c++11
    1/ Function pointers
    2/ Lambda functions
    3/ Functors
    4/ Member functions
    5/ Static member functions
*/

#include <iostream>
#include<chrono>
#include<thread>
#include<algorithm>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;

ull OddSum = 0;
ull EvenSum = 0;

void findEven(ull start, ull end){
    for (ull i = start; i<=end; i++){
        if((i%2)==0){
            EvenSum +=i;
        }
    }
}

void findOdd(ull start, ull end){
    for (ull i = start; i<=end; i++){
        if((i%2)==1){
            OddSum +=i;
        }
    }
}

int main(){

    ull start = 1;
    ull end = 1900000000;

    auto startTime = high_resolution_clock::now();

    findEven(start, end);
    findOdd(start, end);

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);

    cout<<"EvenSum is: "<<EvenSum<<endl;
    cout<<"OddSum is: "<<OddSum<<endl;
    cout<<"Duration to complete the process is:"<<duration.count()/1000000<<endl;
    return 0;
}