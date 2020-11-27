#include<iostream>
using namespace std;

class DoMath{
    private:
        int val_1;
        int val_2;
    public:
        void PrintSum(int s, int t){
            val_1=s; val_2=t;
            cout<<"val of sum of private member is: "<<val_1+val_2<<endl;}
        int GetNum(){
            int sum= val_1+val_2;
            return sum;

        }
};

void RefFunc(DoMath &refobj){
    cout<<"Inside of the reference function\nHere Summation Value is from the main function is: "<<refobj.GetNum()<<endl;
    refobj.PrintSum(9,8);
    cout<<"Now Summation value from the member function of Class is: "<<refobj.GetNum()<<endl;
}

int main(){
    int a,b;
    cout<<"Please Assign value of a and b"<<endl;
    cin>>a;cin>>b;
    cout<<"In main function val of a: "<<a<<" , and b: "<<b<<endl;
    DoMath obj;
    obj.PrintSum(a,b);
    int GetSum = obj.GetNum();
    cout<<"Sum returned from GetNum function is: "<<GetSum<<endl;

    cout<<"\n\nNow Passing Object as call By referencing to A function\n"<<endl;
    RefFunc(obj);
    cout<<"\nAfter doing the call by refernce in the Main function Summation is changed to: "<<obj.GetNum()<<endl;


    return 0;
}