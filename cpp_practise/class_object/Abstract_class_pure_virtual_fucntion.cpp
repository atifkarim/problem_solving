/*
https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/
https://www.youtube.com/watch?v=SvesRBYu65k

If a class has at least one pure virtual function then it is called abstract class
It is required when reuse of function is needed

*/

#include <iostream>
using namespace std;

class Base{ // Abstract class

    public:
        virtual void Show()=0; // pure virtual function

        /**
         * The reason for making the destructor virtual in the base class is that it simply
         * removes the choice from derived classes. Their destructor becomes virtual by default.
         */
        virtual ~Base(){}
};

// Must All inherited class override the virtual function of Base Class( which inherit Base)
class Derived_1:public Base{
    public:
        void Show(){ // function
            cout<<"I am derived_1\n";
        }
};

class Derived_2 : public Base{
    public:
        void Show(){
            cout<<"I am derived_2\n";
        }
};

class Derived_3 : public Base{
    public:
        void Show(){
            cout<<"I am derived_3\n";
        }
};


int main(){
    Derived_1 obj_1;
    obj_1.Show();

    // keep in mind that Abstract class Base cannot instantiate any obj.
    // Base obj_base; // error message
    // But it can assign pointer type obj;

    Base *ptr_base;
    Derived_2 obj_2;
    ptr_base = &obj_2;
    ptr_base->Show();

    // Another way

    Base *ptr_base_1 = new Derived_3();
    ptr_base_1 -> Show();
    delete ptr_base_1;

    return 0;
}
