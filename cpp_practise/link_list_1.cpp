/*
Link list from Niton Bengali Book
*/

#include <iostream>
using namespace std;

class LinkList{

    private:
        int x;
    public:
        void SetValue(int i){x=i;}
        int GetValue(){return x;}
        LinkList *NextElement;
};

int main(){
    LinkList o1, o2;
    o1.SetValue(10);
    cout<<"The val from o1: "<<o1.GetValue()<<endl;

    o2.SetValue(50);
    cout<<"The val from o2: "<<o2.GetValue()<<endl;

    o1.NextElement = &o2;
    cout<<"Value as link list: "<<(o1.NextElement)->GetValue()<<endl;

    // o1.NextElement = &o1;
    // cout<<"val here: "<<(o1.NextElement)->GetValue()<<endl;

    // cout<<"and now o2 is: "<<o2.GetValue()<<endl;


    return 0;}