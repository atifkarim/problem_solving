/*
Trying to use template abstract class
*/

#include <iostream>
using namespace std;

template<typename T>
class Base
{
public:
    Base<T>(int val_base):someVariable{val_base}{
        cout<<"mem: "<<someVariable<<endl;
    }
    T someVariable;
};

// the only right way of inheriting template to template 

class Der : public Base<int>
{
    public:
        Der(int y, int a):Base<int>{a}, val_der{y}{}
        void show_der_val();

    private:
        int val_der;

};

void Der::Der::show_der_val(){
    cout<<"val of derived class private mem is: "<<val_der<<endl;
}


int main(){

    Der obj_der(9,3);
    obj_der.show_der_val();
    return 0;
}