// #include<iostream>
// using namespace std;

// int main(){

//     cout<<"Give your num: ";
//     int number;
//     cin>>number;

//     for(int i =1;i<number+1;i++){
//         cout<<"num here: "<<i<<endl;
//         cout<<"remainder of number%i: "<<number%i<<endl;
//         int a = number%1;
//         int b = number%number;
//         if (2<=i<number)
        
//     }

//     return 0;
// }

/*
#include <iostream>
using namespace std;

int main() {
   int n, i;
   bool isPrime = true;

   cout << "Enter a positive integer: ";
   cin >> n;

   for (i = 2; i <= n/2 ; ++i) {
       cout<<"val of i: "<<i<<" and n: "<<n<<" and n/2: "<<n/2<<endl;
      if (n % i == 0) {
          cout<<"I am here when i is: "<<i<<endl;
         isPrime = false;
         break;
      }
   }
   cout<<"hi giv num: "<<n<<"\n";
   if (isPrime)
      cout << n << " is a prime number";
   else
      cout << n << " is not a prime number";

   return 0;
}*/

// A school method based C++ program to check if a 
// number is prime 
#include <bits/stdc++.h> 
using namespace std; 

bool isPrime(int n) 
{ 
	// Corner case 
	if (n <= 1) 
		return false; 

	// Check from 2 to n-1 
	for (int i = 2; i < n; i++){
        cout<<"val of i: "<<i<<endl; 
		if (n % i == 0) {
			return false;}} 

	return true; 
} 

// Driver Program to test above function 
int main() 
{   isPrime(1. ) ? cout << " true\n" : cout << " false\n";
	isPrime(11) ? cout << " true\n" : cout << " false\n"; 
	isPrime(15) ? cout << " true\n" : cout << " false\n"; 
	return 0; 
} 
