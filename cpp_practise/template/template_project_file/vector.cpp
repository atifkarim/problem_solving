#include "vector.h"
#include <iostream>
using namespace std;

// template <typename T>
// Average<T>::Average()
// {
// 	cout<<"constructor calling\n";
// }

template <typename T>
void Average<T> :: GetElement(){

            for (int i =0;i<5;i++){
                cout<<"\nArray["<<i<<"]: ";
                cin>>array[i];
            }
        }

template <typename T>
T Average<T> :: GetAverage(){
            T sum = 0;
            for (int i=0;i<5;i++){
                sum +=array[i];
            }
        T avg = (sum/5);
        return avg;
        }

// No need to call this TemporaryFunction() function,
// it's just to avoid link error.
// void TemporaryFunction ()
// {
//     Average<int> TempObj;
// }