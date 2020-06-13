/*
There are diffrent ways of making threading in cpp
*/


#include <iostream>
#include <thread>

using namespace std;


/*Function pointer*/
void fun(int x){
    while(x-->0){
        cout<<"val of x is: "<<x<<endl;
    }
}

int main(){

    std::thread t(fun, 10);
    t.join();
    return 0;

}