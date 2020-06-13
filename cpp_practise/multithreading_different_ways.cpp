/*
There are diffrent ways of making threading in cpp
*/


#include <iostream>
#include <thread>

using namespace std;


/******************************************Function Pointer******************************************/

/*
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

*/

/******************************************Lambda Function******************************************/

int main(){

    auto fun = [](int x){ 

        while(x-->0){
            cout<<"the val is: "<<x<<endl;
        }
    };

    std::thread t (fun, 10);

    // now just comment the lambda function to threading and uncomment the following lines to inject lambda
    // directly at thread creation time

    // std::thread t ([](int x){ 

    //     while(x-->0){
    //         cout<<"the val is: "<<x<<endl;
    //     }
    // }, 10);
    t.join();

    return 0;
}