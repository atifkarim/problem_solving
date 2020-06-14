/*
https://www.youtube.com/watch?v=NsqqWDQHldo&list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp&index=10
*/


#include <iostream>
#include <thread>
#include<mutex>

using namespace std;

int buffer = 0;
std::mutex m;

//type 1 function
void task_1(const char* threadNumber, int loopFor){
    std::unique_lock<mutex> lock(m);
    for(int i =0; i<loopFor; ++i){
        buffer++;
        cout<<threadNumber<<" : "<<buffer<<endl;
    }

}

//type 2 function
void task_2(const char* threadNumber, int loopFor){
    std::unique_lock<mutex> lock(m, std::defer_lock); // does not call lock on mutex m as used defer lock
    lock.lock(); // But then we have to explicitly call lock when we want to lock mutex m.
    for(int i =0; i<loopFor; ++i){
        buffer++;
        cout<<threadNumber<<" : "<<buffer<<endl;
    }

}

int main(){

    std::thread t1(task_2, "T1", 10);
    std::thread t2(task_2, "T2", 10);

    t1.join();
    t2.join();

    return 0;
}