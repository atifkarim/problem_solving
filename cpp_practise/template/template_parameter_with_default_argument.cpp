/*
This code here shows the usage of default data type parameter
*/

#include<iostream>
using namespace std;

template <typename T1 = int, int i = 7> // game is here. We have mentioned that int type identifier and 
                                        // int i has value 7. But from main function this could be changeable
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

    X <float,5> obj_1;
    // We can write the previous line as like as the following also: All are correct.
    // But never ever write X <5> obj_1; then it is error. because compiler will try to match 5 as the identifier
    // and it is not posible as identifier don't take const expression
    
    // X <float> obj_1; 
    // X <> obj_1;
    // X <double,5> obj_1;


    obj_1.ShowElement();
    obj_1.GetElement();
    obj_1.ShowElement(); 
    return 0;
}