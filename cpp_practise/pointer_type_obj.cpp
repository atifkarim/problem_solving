#include <iostream>
using namespace std;

class SUM{
    public:
    SUM(){cout<<"Free constructor\n";}
    int a ; int b;
    int do_sum(int x, int y);
};

int SUM::do_sum(int x, int y){
    cout<<"result from sum function is: "<<x+y<<endl;
}
int main(){

    int q; int p;
    cin>>q; cin>>p;

    SUM *ptrobj;
    ptrobj = new SUM();
    ptrobj->a = 4;
    ptrobj->b = 5;

    ptrobj->do_sum(q,p);

    delete ptrobj;

    SUM obj_1;
    obj_1.a = 1;
    obj_1.b = 2;

    obj_1.do_sum(q,p);

    return 0;
}