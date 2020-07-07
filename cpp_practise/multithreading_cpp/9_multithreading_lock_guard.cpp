/*
https://www.youtube.com/watch?v=ACoYnEzjEz4&list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp&index=9
*/


#include <iostream>
#include <thread>
#include<mutex>

using namespace std;

int buffer = 0;
std::mutex m;

void task(const char* threadNumber, int loopFor){
    std::lock_guard<mutex> lock(m);
    for(int i =0; i<loopFor; ++i){
        buffer++;
        cout<<threadNumber<<" : "<<buffer<<endl;
    }

}

int main(){

    std::thread t1(task, "T1", 10);
    std::thread t2(task, "T2", 10);

    t1.join();
    t2.join();

    return 0;
}