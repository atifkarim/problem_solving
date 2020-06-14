/*
https://www.youtube.com/watch?v=eh_9zUNmTig&list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp&index=11
*/

#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <condition_variable>

using namespace std;

std::condition_variable cv;
std::mutex m;
long balance = 0;

void addMoney(int money){
    std::lock_guard<mutex> lg(m);
    balance += money;
    cout<<"Ammount added and current balance is: "<<balance<<endl;
    cv.notify_one();
}

void withDrawMoney(int money){
    std::unique_lock<mutex> ul(m);
    cv.wait(ul, []{return (balance!=0)?true:false;});

    if(balance>=money){
        balance-=money;
        cout<<"Amount deducted: "<<money<<endl;
    }
    else{
        cout<<"Amount cannot be deducted, Currrent balance is less than: "<<money<<endl;
    }
    cout<<"Current balance is: "<<balance<<endl;

}

int main(){

    std::thread t1(withDrawMoney, 400);
    std::thread t2(addMoney,500);
    t1.join();
    t2.join();

    return 0;
}