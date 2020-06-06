#include<iostream>
using namespace std;

long long int factorial(long long int n){

    if(n<0){
        cout<<"Please don't give any negative value, try number greater than 0\n";
        long long int m;
        cin>>m;
        factorial(m);
    }

    else
    { 
        if(n==1 || n ==0)
        {
            cout<<"\nI am here\n";
            return 1;
        }
    // cout<<"\ncount the result while n= : "<<n*(n-1)<<endl;
        return n*factorial(n-1);
        // Please 
    }
}

int factorial_1(int s){
    if(s==1)
        return 1;
    return s*factorial_1(s-1);
}

int factorial_ternary(int a){
    return (a==0 || a==1)?1:a*factorial_ternary(a-1);
}

int main(){
    long long int x;
    cout<<"Give your desired value to get factorial, please use greater than zero value: ";
    cin>>x;

    // In the following line just choose which function you want to use. Rewrite/Update plz
    long long int result = factorial(x);
    cout<<"result is: "<<result<<endl;

    cout<<"Using factorial_ternary function for "<<x<<" result of factorial is: "<<factorial_ternary(x)<<endl;
    return 0;
}
