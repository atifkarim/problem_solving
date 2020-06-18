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
}