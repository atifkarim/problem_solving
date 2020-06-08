/*
Suppose base class is A
Class B and C inherit class A
Class D inherits Class B and C.
So that means Class D has two copy of A , one came from Class B another from Class C
If right now Class D want to access any member of Class of A then ambiguity problem will occur
which meand that compiler cannot take decision which A it will take(from Class B OR Class C)
To remove this virtual Base Class concept used
source : https://www.geeksforgeeks.org/virtual-base-class-in-c/

*/