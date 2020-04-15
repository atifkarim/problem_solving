/*
Use pointer as a member variable
*/

#include<iostream>
#include<string>
using namespace std;

class Test{
    private:
    int *b;
        int a;
    public:
    // int a; int *b;
        void setAB(int x, int y){
            a = x;  b = &y;
            cout<<"value: a: "<<a<<" ,x: "<<x<<" b: "<<*b<<endl;
        // cout<<"value: a: "<<b<<" ,x: "<<y<<endl;
        }
    
        // int GetAB(){
        //    int s = a*(*b);
        //    return s;
        // }
};

int main(){
    // int r = 2;
    Test ts_1;
    ts_1.setAB(12,15);

    return 0;
}

/*
#include <iostream>
 
using namespace std;
 
 
class myclass{
    private:
    int a; int b;
    public:
    void setAB(int x, int *y){
        a=x;
        b=*y;
        cout<<"value: a:"<<a<<" b:"<<b;
    }
   
};
 
int main()
{
   int a=2;
   int c=17;
   myclass ab;
   ab.setAB(10,15);
   return 0;
}

*/