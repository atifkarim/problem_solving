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

    auto add_1 = [p,q](int a , int b) {
        return a + b + p + q;
    };

    cout<<"Result of add_1 function is: "<<add_1(200,10)<<endl;


}