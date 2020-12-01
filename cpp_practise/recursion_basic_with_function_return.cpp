#include<iostream>
using namespace std;
int a,b;
int product_description(int number)
{

cout<<"-----------------FUNCTION CALLING-----------------------&&&& NUMBER IS:  "<<number<<endl;

if (number !=1 && number !=2)

{
cout<<"in if loop number is: "<<number<<endl;
int d;
cout<<"Wrong button pressed, Please be careful to the message\n"<<endl;
cin>>d;
product_description(d);
}

else

{
cout<<"GOOD BOY !!!"<<endl;
return number;
}



//cout << "function returning : -------------"<<number<<endl;
//return  number;
}

int main()
{
cout<<"check which button is pressed, Please press Button 1 or 2: "<<endl;
cin>>a;
cout<<"!!!!!!!!!!!!!!!!! FOR THE 111111 st time function calling"<<endl;
b = product_description(a);
cout<<"AAAAAAAAAAAAHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH FINISHHHHHHHHHHHHHHHH"<<endl;
cout<<"pressed button is: "<<b<<endl;
return 0;
}
