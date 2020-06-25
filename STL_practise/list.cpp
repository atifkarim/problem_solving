/*
list is a STL of C++, it is like doubly linked list. At any position it can take value.
https://www.youtube.com/watch?v=CFXqbBXGRIQ&list=PLrKBFf87Cy9Ck9H7dHpsu8456B4rWQzfT&index=4
*/

#include<iostream>
#include <list>

using namespace std;

int main (){
    list <int> my_li;
    my_li.push_front(5);
    my_li.push_front(8);
    my_li.push_back(11);

    for(auto a : my_li){
        cout<<a<<" ";
    }
    cout<<endl;

    // Now if anyone want to traverse through the list then person should call iterator which is nothing but pointer

    list <int> :: iterator it = my_li.begin();
    cout<<"Using iterator called it val is: "<<*it<<endl;

    cout<<"Use for loop with iterator\n";
    for(it; it!=my_li.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}