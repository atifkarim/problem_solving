/**
 * How to Define a Template Class in a .h File and Implement it in a .cpp File
 * https://www.codeproject.com/Articles/48575/How-to-Define-a-Template-Class-in-a-h-File-and-Imp
 * Method 2 taken from the above source
 */

#include <iostream>
#include "vector.h"
#include "vector.cpp"
using namespace std;

int main(){
    Average <int> int_obj;
    int_obj.GetElement();
    cout<<"Average val is: "<<int_obj.GetAverage()<<endl;

    Average <double> double_obj;
    double_obj.GetElement();
    cout<<"Average val is: "<<double_obj.GetAverage()<<endl;



    return 0;
}