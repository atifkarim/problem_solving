/*
To ock multiple mutex std_try_lock() is used
https://www.youtube.com/watch?v=r-PDHNWYdes&list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp&index=6
*/

#include <iostream>
#include <thread>
#include<mutex>
#include<chrono>

using namespace std;
std::mutex m1, m2;

int X=0; int Y=0;

void DoSomeWorkForSeconds(int seconds){std::this_thread::sleep_for(std::chrono::seconds(seconds));}

void incrementXY(int &XorY, std::mutex &m, const char* dsec){
    for(int i =0;i<5;i++){
        m.lock();
            ++XorY;
        cout<<dsec << XorY<<endl;
        m.unlock();
        DoSomeWorkForSeconds(1);
    }
}

void ConsumeXY(){
    int useCount = 5;
    int XplusY = 0;
    while(1){
        int lockResult = std::try_lock(m1, m2);
        if (lockResult == -1){
            if(X!=0 && Y!=0){
                --useCount;
                XplusY+=X+Y;
                X=0;
                Y=0;
                cout<<"XplusY: "<<XplusY<<endl;
            }
            m1.unlock();
            m2.unlock();
            if (useCount==0) break;
        }
    }
}

int main(){

    std::thread t1(incrementXY, std::ref(X), std::ref(m1), "X");
    std::thread t2(incrementXY, std::ref(Y), std::ref(m2), "Y");
    std::thread t3(ConsumeXY);

    t1.join();
    t2.join();
    t3.join();
}