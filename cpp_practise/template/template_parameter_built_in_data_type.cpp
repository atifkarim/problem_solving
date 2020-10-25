/*
This code here shows the usage of built in data type parameter
*/

#include<iostream>
using namespace std;

template <typename T1, int i>
class X {
    T1 x[i];
    public:
        X(void); // declaration of constructor
        void GetElement();
        void ShowElement();
};

// Constructor definition
template <typename T1, int i>
X<T1, i>::X(void){
    cout<<"Constructor is called\n";
    for (int size =0;size<i;size++){
        x[size] = 0;
    }
}

// GetElement() function definition

template<typename T1, int i>
void X <T1, i>::GetElement(){

    for (int size = 0; size<i;size++){
        cout<<"Getting value for x["<<size<<"]: ";
        cin>>x[size];
    }
}

// ShowElement() function definition

template<typename T1, int i>
void X <T1, i>::ShowElement(){

    for (int size = 0; size<i;size++){
        cout<<"Now value for x["<<size<<"]: "<<x[size]<<endl;
    }
}

// main function

int main(){

    X <float, 5> obj_1;
    obj_1.ShowElement();
    obj_1.GetElement();
    obj_1.ShowElement(); 
    return 0;
}