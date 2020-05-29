/*
Usage of multiple generic type using template
*/

#include<iostream>
#include<string>
using namespace std;

template <typename T1, typename T2, typename T3>
class T {
    T1 a; T2 b; T3 c; // Declare private member for class
    public:
        // Declaring Constructor
        T (T1 p, T2 q, T3 r){
            cout<<"Constructor is called\n";
            a = p; b = q; c = r;
        } 
        // Member function declaration, but defined outside
        void ShowValue();
        ~ T(){cout<<"Destructor is called\n";}
};

// defintion of member function

template<typename T1, typename T2, typename T3>
void T <T1, T2, T3>::ShowValue(){
    cout<<"Output of Member function: \n";
    cout<<"val of a: "<<a<<endl;
    cout<<"val of b: "<<b<<endl;
    cout<<"val of c: "<<c<<endl;
}

// main function
int main(){
    // declare two obj with two different data type
    T <int, float, string> obj_1 (50,0.45,"Atif");
    T <string, int, int> obj_2 ("Karim",58,100);
    //  We can also give char, char* . for char* we have to write with double inverted comma, "Atif", for char , 'Atif'.

    cout<<"Value of first object is as following: \n";
    obj_1.ShowValue();
    cout<<"Value of second object is as following: \n";
    obj_2.ShowValue();
    return 0;
}
