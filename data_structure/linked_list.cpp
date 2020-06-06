/*
Try to know the working process of linked list in chopped
help taken from --
https://www.geeksforgeeks.org/linked-list-set-1-introduction/
https://www.youtube.com/watch?v=o5wJkJJpKtM&feature=youtu.be&t=11m55s
*/

#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node * next;
};

void PrintLinkedList(node *n){
    while(n != NULL){
        cout<<n->data<<" ";

        n = n->next;

    }
}

int main(){

    // think like this -->> h--t--n

    node * n = NULL; // creation for the new node
    node * t = NULL; // for temporary node which update itself to point to the new node at each step
    node * h = NULL; // Head node, will use for printing/ accessing

    // Alocating the pointer in the heap
    n = new node();
    h = new node();
    t = new node();

    // giving value
    // Way of geeksforgeeks
    /*
    h->data = 10;
    h->next = t;

    t->data = 15;
    t->next = n;

    n->data = 17;
    n->next = NULL;
    */
    // Way of the youtube channel

    n->data = 19; // creation of first node 
    t = n; // This is not pointing to n rather pointing to the location where n is pointing
    h = n; // same as t

    n = new node; // creation of 2nd node
    n->data = 21; // giving value
    t->next = n; // telling t to access next and point to the location which is pointed by n, creating connection
    t = t->next; // changing the position of t

    n = new node; // creation of 3rd node
    n->data = 32; // giving value
    t->next = n; // telling t to access next and point to the location which is pointed by n, creating connection
    t = n; // it is same as the previous code t = t->next

    // This line t->next = n is very imp because without it the linking between different node will not be established

    n -> next =  NULL; // This is telling to stop the creation of new node

    



    PrintLinkedList(h);

    // Not sure about the following lines. Hope it is correct
    delete n;
    delete h;
    delete t;



    return 0;
}