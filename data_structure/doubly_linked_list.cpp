/*
Learn how to create doubly linked list
source: https://www.youtube.com/watch?v=YJRRpXYldVQ
https://www.youtube.com/watch?v=5s0x8bc9DvQ
*/
#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node * next;
        node * prev;
};

void PrintForwardLinkedList(node *n){
    while(n!= NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}

void PrintReverseLinkedList(node *n)
    {
        while (n!=NULL)
        {
            cout<<n->data<<" ";
            n = n->prev;
        }
    }

int main(){

    // creation of 3 pointer to make the linkedlist
    node *n = NULL; // will be used to create the new node
    node *head = NULL; // head node to print or trace the list
    node *tail = NULL; // to link between two node it will work

    n = new node; // first node which has three part -->> data, next, prev
    n->data = 34; // giving value
    n->prev = NULL; // telling new node not to point to any address before itself's preset address, that means finis point of zthe beginning
    head = n; // telling head pointer to point to the same address of n
    tail = n;  // same as head

    // now creating of new node
    n = new node;
    n->data = 26; // giving new value to new node. look it has now also 3 part-->> data, next, prev
    // former n just creates a container whose type is "node" and it has 3 part-->> data, next, prev
    // next and prev are nothing but pointer
    // Here , in this new container we have to tell prev to point to the address of previous container's (node)
    // tail. WHY?? Because, it is a doubly linked list. look, just in the first time while I have created first
    // node , then I have told it to point 'prev' to NULL. Because, then it will stop to point to any one

    n->prev = tail; // second node is now connected to the first node in reverse direction
    // now do the task for forward direction as like as single linked list.
    tail->next = n;
    tail = n;

    // just copy pase previous 5 lines to create new node and assiging data and making linked list

    n = new node;
    n->data = 45;
    n->prev = tail;
    tail->next = n;
    tail = n;

    n->next = NULL;

    PrintForwardLinkedList(head);
    cout<<endl;
    PrintReverseLinkedList(tail);

    return 0;
}