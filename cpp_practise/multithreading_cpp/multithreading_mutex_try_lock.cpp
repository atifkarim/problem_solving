/*
mutex try lock
source : https://www.youtube.com/watch?v=UgcyOBUaR6M&list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp&index=5
*/

#include <iostream>
#include <thread>
#include<mutex>

using namespace std;
std::mutex m;
int counter = 0;

/*
What happened here??
try_lock try to lock.first thread come and then try_lock and locked. then iterate. it every time
do the lock and unlocking process. SO, keep in mind that in case of basic lock() and unlock() process the
final result would be 2lacs but here it will not be and every time result will be different.
Because, every time try and unlock. So, it depends on CPU. 
Another thing: Will not atleasz val will be more that 1 lac? For any of the first thread?
Ans: NO.  because t1 and t2 will keep unlocking the mutex and will give chance to each other to increment.
*/

void increaseCounter(){
    for(int i= 0; i<100000;i++)
    {
        if (m.try_lock()){
            ++counter;
            m.unlock();

        }
    }
}

int main(){

    std::thread t1(increaseCounter);
    std::thread t2(increaseCounter);

    t1.join();
    t2.join();

    cout<<"counter val is: "<<counter<<endl;

    return 0;
}