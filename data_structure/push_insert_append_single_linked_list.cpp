/*
Try to learn how to add new data in a singly linked list
there is 3 ways. Source: https://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/
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

// following function helps to add new data in the end of the previous linked list
void append(node** head_ref, int new_data)  
{  
    /* 1. allocate node */
    node* new_node = new node(); 
  
    node *last = *head_ref; /* used in step 5*/
  
    /* 2. put in the data */
    new_node->data = new_data;  
  
    /* 3. This new node is going to be  
    the last node, so make next of  
    it as NULL*/
    new_node->next = NULL;  
  
    /* 4. If the Linked List is empty, 
    then make the new node as head */
    if (*head_ref == NULL)  
    {  
        *head_ref = new_node;  
        return;  
    }  
  
    /* 5. Else traverse till the last node */
    while (last->next != NULL)  
        last = last->next;  
  
    /* 6. Change the next of last node */
    last->next = new_node;  
    return;  
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

    append(&h, 6);



    PrintLinkedList(h);

    // Not sure about the following lines. Hope it is correct
    delete n;
    delete h;
    delete t;



    return 0;
}