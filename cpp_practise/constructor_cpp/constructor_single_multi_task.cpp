#include <iostream>
using namespace std;

class Math{

    int a,b;
    public:
        Math(int c =0, int d = 0);
        int Sum();
};

Math::Math(int a_1, int b_1)
: a{a_1},b{b_1}
{
    cout<<"Here I am the val of private mem: a: "<<a<<" and b: "<<b<<endl;
}

int Math::Sum(){
            int sum = a+b;
            return sum;
        }

int main(){
    int q,p;
    cout<<"Give value for q: ";
    cin>>q;
    cout<<"Give value for q: ";cin>>p;
    Math obj(q,p);
    int res = obj.Sum();
    cout<<"\nthe res is: "<<res<<endl;
    return 0;
}