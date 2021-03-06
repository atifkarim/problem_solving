/*
https://www.youtube.com/watch?v=yCYU2k77E4A&list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp&index=8
If you call lock 5 times then obviously call unlock also same time

*/

#include <iostream>
#include <thread>
#include<mutex>
#include<chrono>

using namespace std;

int buffer = 0;
std::recursive_mutex m;

void recursion(char c, int loopFor){
    if(loopFor<0)
        return;
    m.lock();
    cout<<"locked by thread ID: "<<c<<" while buffer val is: "<<buffer++<<endl;
    recursion(c, --loopFor);
    m.unlock();
    cout<<"unlock by thread ID: "<<c<<endl;
}

int main(){

    std::thread t1(recursion, '1', 10);
    std::thread t2(recursion, '2', 10);

    t1.join();
    t2.join();

    return 0;
}