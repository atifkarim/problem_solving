/*
There are diffrent ways of making threading in cpp
https://www.youtube.com/watch?v=hCvc9y39RDw&list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp&index=2
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
/*
int main(){

    // auto fun = [](int x){ 

    //     while(x-->0){
    //         cout<<"the val is: "<<x<<endl;
    //     }
    // };

    // std::thread t (fun, 10);
    

    // now just comment the lambda function to threading and uncomment the following lines to inject lambda
    // directly at thread creation time

    std::thread t ([](int x){ 

        while(x-->0){
            cout<<"the val is: "<<x<<endl;
        }
    }, 10);
    t.join();

    return 0;
}

*/


/******************************************Functor******************************************/
/*
class Base{
    public:
        void operator ()(int x){ // keep the name operator. function object
            while(x-->0){
                cout<<"val is now: "<<x<<endl;
            }
        }
};

int main(){
    std::thread t ( (Base()), 10);
    t.join();
    return 0;
}
*/

/******************************************Non Static Member Function******************************************/
/*
class Base{
    public:
        void run(int x){
            while (x-->0){
                cout<<"the val is: "<<x<<endl;
            }

        }
};

int main(){

    Base b;
    std::thread t (&Base::run, &b, 10);
    t.join();
    return 0;
}
*/

/******************************************Static Member Function******************************************/

class Base{
    public:
        static void run(int x){
            while (x-->0){
                cout<<"the val is: "<<x<<endl;
            }

        }
};

int main(){

    std::thread t (&Base::run,10);
    t.join();
    return 0;
}