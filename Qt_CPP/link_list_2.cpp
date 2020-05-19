/*
Link List example from Niton Bangla Book with NEW variable
*/
#include<iostream>
using namespace std;

class LinkList{
    private:
        int x;
    public:
        LinkList(){cout<<"Constructor is calling"<<endl;}
        void SetValue(int a){x=a;}
        int GetValue(){return x;}
        LinkList *NextElement;
        ~LinkList(){cout<<"Destructor is calling"<<endl;}
};

int main(){

    LinkList o1;
    o1.SetValue(65);
    cout<<"Getting value from direct object o1: "<<o1.GetValue()<<endl;

    o1.NextElement = new LinkList;
    o1.NextElement-> SetValue(98);

    cout<<"Getting Value from o1 Linklist: "<<(o1.NextElement)->GetValue()<<endl;
    
    
    return 0;}