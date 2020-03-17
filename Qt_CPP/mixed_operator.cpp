// #include<iostream>
// #include<string> // for string class
// using namespace std;
// int main()
// {
//     // Initializing string
//     string str = "geeksforgeeks is for geeks";
//
//     // Displaying string
//     cout << "The initial string is : ";
//     cout << str << endl;
//
//     // Resizing string using resize()
//     str.resize(13);
//
//     // Displaying string
//     cout << "The string after resize operation is : ";
//     cout << str << endl;
//
//     // Displaying capacity of string
//     cout << "The capacity of string is : ";
//     cout << str.capacity() << endl;
//
//     //Displaying length of the string
//     cout<<"The length of the string is :"<<str.length()<<endl;
//
//     // Decreasing the capacity of string
//     // using shrink_to_fit()
//     str.shrink_to_fit();
//
//     // Displaying string
//     cout << "The new capacity after shrinking is : ";
//     cout << str.capacity() << endl;
//
//     return 0;
//
// }


// string::shrink_to_fit
#include <iostream>
#include <string>

int main ()
{
  std::string str (100,'x');
  std::cout << "1. capacity of str: " << str.capacity() << '\n';

  str.resize(10);
  std::cout << "2. capacity of str: " << str.capacity() << '\n';

  str.shrink_to_fit();
  std::cout << "3. capacity of str: " << str.capacity() << '\n';

  return 0;
}
