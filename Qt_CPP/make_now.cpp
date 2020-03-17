#include<iostream>
#include<cstring> // for string class
#include<string>
#include<cctype>
using namespace std;
int main()
{
  // Initializing string
  string str = "geeksforgeeks is for geeks";

  // Displaying string
  cout << "The initial string is : ";
  cout << str << endl;

  // Resizing string using resize()
  str.resize(13);

  // Displaying string
  cout << "The string after resize operation is : ";
  cout << str << endl;

  // Displaying capacity of string
  cout << "The capacity of string is : ";
  cout << str.capacity() << endl;

  //Displaying length of the string
  cout<<"The length of the string is :"<<str.length()<<endl;

  // Decreasing the capacity of string
  // using shrink_to_fit()
  str.shrink_to_fit();

  // Displaying string
  cout << "The new capacity after shrinking is : ";
  cout << str.capacity() << endl;

  cout<<"-----------------------------------------------------"<<endl;
  char first_name[20];
  char last_name[20];
  char full_name[50];
  cout<<"give firts name: ";cin>>first_name;
  cout<<"give last name: ";cin>>last_name;
  cout<<"\nfirst name is: "<<first_name<<endl;
  cout<<"length is: "<<strlen(first_name)<<endl;
  cout<<"last name is: "<<last_name<<endl;

  strcpy(full_name,first_name);
  strcat(full_name," ");
  strcat(full_name,last_name);
  cout<<"Full name is: "<<full_name<<endl;

  char temp[50] {};
  cout<<"Enter temporary name: ";
  cin.getline(temp,50);
  cout<<"Temporary name is: "<<temp<<endl;

  string str_1;

  cout << "Please enter your name: \n";
  getline(cin, str_1);
  cout << "Hello, " << str_1
       << " welcome to GfG !\n";

  string s6 (3,'F');
  cout<<"now: "<<s6<<endl;
  string name_here = "AtifBin";
  string s5 {name_here,0,3};
  cout<<"now_1: "<<s5<<endl;

  string s0="Karim";
  for(auto c:s0) // can give here int also to see the ASCII code for the charecter. can give here char also
  {
    cout<<c<<endl;
  }

  string one_1 = "ONE";
  string one_2 = "ONE";

  if (one_1==one_2){
    cout<<"Bang"<<endl;
  }
  else{
    cout<<"öang"<<endl;
  }

  string sub_string_1 = "This is a test";
  cout<<"sub string look: "<<sub_string_1.substr(1,5)<<endl;
  cout<<"look at index: "<<sub_string_1.at(8)<<endl;

  // finding word using find function

  string word {};
  cin>>word;
  size_t position= sub_string_1.find(word);
  if (position != string::npos){
    cout<<"Found "<<word<<" at position: "<<position<<endl;
  }
else{
  cout<<"Sorry not founf the word: "<<word<<endl;
}

cout<< sub_string_1.erase(5,4)<<endl;;
cout<<"and now: "<<sub_string_1<<endl;

string m = "Apple";
string n = "Banana";
cout<<boolalpha;
cout<<"is it true?: "<<(m==n)<<endl;
for (size_t i{0}; i<n.length();++i){
cout<<n.at(i);
cout<<endl;
}

for (auto c_1:n){
  cout<<c_1<<endl;
}


  return 0;

}

/*
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
*/
