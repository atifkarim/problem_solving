/*
A common way of writing cpp code sometimes holds the args name argc and argv. Lets dig themselves
https://www.youtube.com/watch?v=aP1ijjeZc24
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    // The following line will say how many args is/are passed during the running of the code
    // after compiling the code I have a executable file, lets suppose, it is "main"
    // To run this, I write in terminal ./main
    // At this time the following line will print : 1
    // But if I write ./main atif bin karim
    // then it will print 4
    // ./main itself an argument so it prints 1 at the first time.
    cout<<"argc is here %d\n"<<argc<<endl;

    cout<<"\nNow Printing the content of argv\n";
    int i;
    for (i =0; i<argc;++i){
        cout<<"value of argv --- "<<i<<" is: "<<argv[i]<<endl;
    }
    return 0;
}