#include<iostream>
using namespace std;

class Base{
public:
  int a {0};
  void display()
  {cout<<"a: "<<a<<" ,b: "<<b<<" ,c: "<<c<<endl;}

protected:
  int b {0};

private:
  int c {0};
};

class Derived:public Base{

public:
  void access_base_members(){
    a = 200;
    b = 50;
//    c = 54;

  }
};

int main(int argc, char *argv[])
{
  cout<<"Base member access from base objects\n"<<endl;
  Base base;
  base.a= 1054;
  base.display();
//  base.b=500;
//  base.c= 90;

  cout<<"\nDerived member from derive objects\n"<<endl;
  Derived d;
  d.a = 87;
  d.b=90;
  d.c=900;


  return 0;
}
