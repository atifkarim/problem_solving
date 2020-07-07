/*
It is also called Bounded Buffer Probelm
source : https://www.youtube.com/watch?v=rKGq9AlfPR4&list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp&index=17
*/

#include <iostream>
#include <thread>
#include <mutex>
#include <deque>
#include <condition_variable>

using namespace std;
std::mutex m;
std::condition_variable cond;
deque<int> buffer;
const unsigned int maxBufferSize = 50;

void producer(int val){
    while (val){
        std::unique_lock<std::mutex> lock(m);
        cond.wait(lock, [](){return buffer.size()<maxBufferSize;});
        buffer.push_back(val);
        cout<<"Produced: "<<val<<endl;
        val--;
        lock.unlock();
        cond.notify_one();
    }
}

void consumer(){
    while(true){
        std::unique_lock<std::mutex> lock(m);
        cond.wait(lock, [](){return buffer.size()>0;});
        int val = buffer.back();
        buffer.pop_back();cout<<"Consumed: "<<val<<endl;
        lock.unlock();
        cond.notify_one();
    }
}

int main(){

    std::thread t1(producer, 100);
    std::thread t2(consumer);

    t1.join();
    t2.join();

    return 0;
}