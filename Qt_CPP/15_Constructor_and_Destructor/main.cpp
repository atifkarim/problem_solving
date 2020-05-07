#include<iostream>
using namespace std;

class Base{
private:
  int a;
public:
  Base():a{0}{cout<<"Base No arg constructor is called"<<endl;}
  Base(int x):a{x}{cout<<"Base single arg constructor is called"<<endl;}
  ~Base(){cout<<"Base Destructor is called\n";}
};

class Derived:public Base{
//  using Base::Base; // uncomment it. not recommended. by using it one can call base constructor from derived class constructor wh need arguments.
private:
  int b;

public:
  Derived(): Base{}, b{0}{cout<<"Derived No arg counstructor is called"<<endl;}
  Derived(int r):b{r*2}{cout<<"from main derive take: "<<r<<" and then single constructor "
                                                            "of derived is: "<<b<<endl;}

  /*If we don't give the uper line then from main function cannot call "derived obj {any_value}"
but without using if anyone want to do this then write before private in the derived calss
using Base:: Base;*/

  ~Derived(){cout<<"Derived destructor is called"<<endl;}
};


// Below class can call base class constructor which takes arguments.
// Look at the syntax
class Derived_1:public Base{
//  using Base::Base; // uncomment it. not recommended. by using it one can call base constructor from derived class constructor wh need arguments.
private:
  int b;

public:
  Derived_1(): Base{}, b{0}{cout<<"Derived_1 No arg counstructor is called"<<endl;}
  Derived_1(int r):Base{r},b{r*2}{cout<<"from main derive_1 take: "<<r<<" and then single constructor "
                                                            "of derived_1 is: "<<b<<endl;}

  /*If we don't give the uper line then from main function cannot call "derived obj {any_value}"
but without using if anyone want to do this then write before private in the derived calss
using Base:: Base;*/

  ~Derived_1(){cout<<"Derived destructor is called"<<endl;}
};

int main(){
//  Base obj_base {};
//  Base obj_base_1 {9};
  Derived d {};
  Derived d_1{7};

  Derived_1 e {};
  Derived_1 e_1 {87};
  return 0;
}
