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
    int sum = 0;
    for (i =1; i<argc;++i) // No need to start from i=0 as the first argv is always the name of the executable file itself
    {
        cout<<"value of argv --- "<<i<<" is: "<<argv[i]<<endl; // here this argv is a string
        sum = sum+atoi(argv[i]); // to run this type in the terminal --> ./executable_file_name 2 3 4 5 // sum will be 14
    }
    cout<<"the sum is: "<<sum<<endl;
    return 0;
}