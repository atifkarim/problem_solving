/*
https://www.youtube.com/watch?v=x0sHzDyETUc&list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp&index=7
*/


#include <iostream>
#include <thread>
#include<mutex>
#include<chrono>

using namespace std;

int myAmount = 0;
std::timed_mutex m;


/*try lock for*/
void increment_try_lock_for (int i){
    if (m.try_lock_for(std::chrono::seconds(2))){
        ++myAmount;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        cout<<"Thread "<<i<<" entered"<<endl;
        m.unlock();
    }
    else{
        cout<<"Thread "<<i<<" Couldn't Enter"<<endl;
    }
}

/*try lock until*/

void increment_try_lock_until (int i){
    auto now = std::chrono::steady_clock::now();
    if (m.try_lock_until(now + std::chrono::seconds(1))){
        ++myAmount;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        cout<<"Thread "<<i<<" entered"<<endl;
        m.unlock();
    }
    else{
        cout<<"Thread "<<i<<" Couldn't Enter"<<endl;
    }
}

int main(){

    std::thread t1(increment_try_lock_until,1);
    std::thread t2(increment_try_lock_until,2);

    t1.join();
    t2.join();

    cout<<"val of myAmount is: "<<myAmount<<endl;

    return 0;
}