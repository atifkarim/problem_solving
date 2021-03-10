// Program to demonstrate working 
// of enum in C++ 
// https://www.geeksforgeeks.org/user-defined-data-types-in-c/
// https://www.geeksforgeeks.org/enumeration-enum-c/

#include <iostream> 
using namespace std; 

enum week { Mon, 
			Tue, 
			Wed, 
			Thur, 
			Fri, 
			Sat, 
			Sun }; 
// enum iam {Mon};  // will show error as in the previous declaration it is present
int main() 
{ 
	enum week day; 

	day = Wed; 

	cout << day<< endl; 

	return 0; 
} 
