/***
 * This code shows--
 * 1/ how to pass an array to a function using pointer argument
 * 2/ changing value of array in the function by using pointer and without return the modified value will come to the
 * main function
 * **/

#include <iostream>
using namespace std;

void modify_array(int* ptr)
{
    for(int i =0; i<5; i++)
    {
        cout<<*(ptr+i)<<" "; // print the original value of the array
        *(ptr+i)=*(ptr+i)+2; // modify the original value of the array
    }

    cout<<endl;
}

int main()
{
    int array[5]={10,20,30,40,50};
    // calling of both the following lines are correct
    // modify_array(array); 
    modify_array(&array[0]);

    cout<<"\nmain function\n";
    for(int a=0; a<5; a++){
        cout<<array[a]<<" "; // print the modified value
    }
    cout<<endl;
    return 0;
}