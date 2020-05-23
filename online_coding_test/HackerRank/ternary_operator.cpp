#include <iostream>

using namespace std;

int main() 
{ 
    // variable declaration 
    int n1 = 15, n2 = 10, max; 
  
    // Largest among n1 and n2 
    max = (n1 > n2) ? n1 : n2; 
  
    // Print the largest number 
    cout<<n1<<"\t"<<n2<<"\t"<<max<<endl; 
  
    return 0; 
} 