/*
Lambfda function in CPP
source : https://www.youtube.com/watch?v=uk0Ytomv0wY&t=673s
*/

#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    // A simplest lambda function which no param,no arguments, just print a message
    auto showMessage = [](){
        cout<<"Hello Lambda"<<endl;
    };

    showMessage();


    // Now giving parameter to lambda and return a value
    // auto add = [&](int a , int b) ->int { // both the lines are correct. but no need to say int here, easy to detect
    auto add = [&](int a , int b) {
        return a + b;
    };

    cout<<"Result of add function is: "<<add(200,15)<<endl;

    // It is not possible to use any local variable in the bosy of the lambda function though they
    // are the under the same scope. But for this Capture list [] will work. Just pass the name of the variable
    // But this will just copy the value, like a parameter passed by the value

    int p = 10;
    int q = 20;

    auto add_1 = [p,q](int a , int b) { // Here in the capture list if put only " = " sign, then also possible
                                        // to do the same operation. 
        // One thing is that it is not possible to change the value of p and q from here
        // as they are passed by value
        // p = 90; q = 82; // It will throw error
        // to resolve this next function(pass then by reference)
        return a + b + p + q;
    };

    cout<<"Result of add_1 function is: "<<add_1(200,10)<<endl;

    // pass local variable to the lambda function by reference.

    int s = 5;
    int t = 10;
    auto add_2 = [&s, &t](int a , int b){ // In the capture list [] if just write & , then also possible
        s = 10;
        t = 15;
        return a+b+s+t;
    };

    cout<<"Result of add_2 is: "<<add_2(20,10)<<endl;
    cout<<"Here the val of s: "<<s<<", and t: "<<t<<endl;

    // Some style of lambda
    // Suppose two int g,h;
    // auto add = [=, &g](int a , int b){ // it means all value will be passed by value except g, it could be changed
        // calculation
    //};
    // Another is
    // auto add = [&, g](int a , int b) // All local variable will be passed by ref except g. It(g) could not be changed



}