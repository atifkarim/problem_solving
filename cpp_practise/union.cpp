/*
Union: Like Structures, union is a user defined data type. In union, all members share the same memory location. 
For example in the following C program, both x and y share the same location. 
If we change x, we can see the changes being reflected in y.

source : https://www.geeksforgeeks.org/user-defined-data-types-in-c/
*/
#include <iostream> 
using namespace std; 

// Declaration of union is same as the structures 
union test { 
	int x, y; 
}; 

int main() 
{ 
	// A union variable t 
	union test t; 

	// t.y also gets value 2 
	t.x = 2; 

	cout << "After making x = 2:"
		<< endl 
		<< "x = " << t.x 
		<< ", y = " << t.y 
		<< endl; 

	// t.x is also updated to 10 
	t.y = 10; 

	cout << "After making Y = 10:"
		<< endl 
		<< "x = " << t.x 
		<< ", y = " << t.y 
		<< endl; 

	return 0; 
} 
