/* C++ Program to demonstrate use of right
shift operator 
https://www.programiz.com/cpp-programming/bitwise-operators
https://www.geeksforgeeks.org/left-shift-right-shift-operators-c-cpp/
*/
#include<stdio.h>
#include <iostream>

using namespace std;
int main()
{
	{
	cout<<"here doing left shifting"<<endl;

	// a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 1, c = 138;

    // The result is 00001010
    printf("a<<1 = %d\n", a<<1);

    // The result is 00010010
    printf("b<<1 = %d\n", b<<3);

	//  printf("c<<1 = %d\n", c<<1);
	 cout<<"value of c<<2 : "<<(c<<2)<<endl;
	}

	{
		cout<<"\nhere doing right shifting"<<endl;
		// a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 1, c = 138;

    // The result is 00001010
    printf("a>>1 = %d\n", a>>1);

    // The result is 00010010
    printf("b>>1 = %d\n", b>>3);

	//  printf("c<<1 = %d\n", c<<1);
	 cout<<"value of c>>2 : "<<(c>>2)<<endl;
		
	}

	{
		cout<<"\nBitwise And operator, sign is &"<<endl;
		// declare variables
   int a = 12, b = 25;
	// 12 = 00001100 (In Binary)

	// 25 = 00011001 (In Binary)
	// Do hand calculation between these two binary and just perform AND gate operation between each bit

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a & b = " << (a & b) << endl;
	}

	{
		cout<<"\nBitwise OR operator, sign is |"<<endl;
		int a = 12, b = 25;
		// 12 = 00001100 (In Binary)
		// 25 = 00011001 (In Binary)
		// Do hand calculation between these two binary and just perform OR gate operation between each bit

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a | b = " << (a | b) << endl;
	}

	{
		cout<<"\nDoing Logical AND operation, sign is &&"<<endl;
		cout<<"Ans is: "<<(15&&127)<<endl;
		// It will be used only in conditional operation type situation. it AND, OR, 
	}
	return 0;
}