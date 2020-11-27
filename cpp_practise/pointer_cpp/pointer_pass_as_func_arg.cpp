/**
 * Here trying to learn how to pass a pointer, double pointer as a function of
 * an argument
 * https://www.geeksforgeeks.org/double-pointer-pointer-pointer-c/
 * **/

#include <iostream>
using namespace std;

int foo(int* length, int** array)
{
   *length = 10;
	int foo_array[*length];
	for(int i=3; i<*length; i++)
	{
		foo_array[i]=i*2;
	}

	// for(auto x:foo_array)
	// {
	// 	cout<<x<<"\t";
	// }

	// int *ptr1{nullptr};
	// following both lines are correct.
	int* ptr1 = &foo_array[0];
	// ptr1 = foo_array;
	cout<<"\nfoo_array first address is found by using &foo_array[0]: "<<&foo_array[0]<<"\nOR by using &foo_array: "<<&foo_array<<endl;
	cout<<"ptr1 address is found by ptr1: "<<ptr1<<" which is pointed to foo_array's first element"<<endl;
	cout<<"\nBut look ptr1 livable address is found by &ptr1: "<<&ptr1;
	cout<<" here which is not same as the previous address OR the address of foo_array.\n\n";

	int** ptr2;
	ptr2 = &ptr1;
	cout<<"ptr2 is pointed to ptr1. So this pointed address is found by ptr2: "<<ptr2;
	cout<<" Which is nothing but the address where actually ptr1 lives\n";
	cout<<"And a completely new address is where ptr2 lives and it is found by &ptr2: "<<&ptr2<<endl;

	cout<<"Array values are displayed with the pointer ptr1\n";
	for(int u = 3; u<*length; u++)
	{
		cout<<*(ptr1+u)<<" ";
	}
	cout<<"\nptr2 val: "<<**ptr2<<endl;

   return 0;
}

int main()
{

   int length_main; // int variabe is passed by using the address. In function a pointer is taking this address
	int* pointer_array;
   foo(&length_main, &pointer_array);
   cout<<"\nlength_main value got from foo function: "<<length_main<<endl;

	/*This is copy paste from gkg*/

// C program to demonstrate pointer to pointer
/*
	int var = 789; 

	// pointer for var 
	int *single_ptr;

	// double pointer for ptr2 
	int **double_ptr;

	// storing address of var in ptr2 
	single_ptr = &var;
	
	// Storing address of ptr2 in ptr1 
	double_ptr = &single_ptr;
	
	// Displaying value of var using 
	// both single and double pointers 
	printf("Value of var = %d\n", var ); 
	printf("Value of var using single pointer = %d\n", *single_ptr ); 
	printf("Value of var using double pointer = %d\n", **double_ptr);

	cout<<"\naddress of var: "<<&var;
	cout<<"\naddress of single pointer: "<<single_ptr<<" and lives at: "<<&single_ptr;
	cout<<"\naddress of double pointer: "<<double_ptr<<" and lives at: "<<&double_ptr<<endl;*/

   
   return 0;
}