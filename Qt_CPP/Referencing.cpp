#include<iostream>
#include<vector>

using namespace std;
int  main(){
    int x {200};
    int &ref{x};

    cout<<"Val of x: "<<x<<" & ref is: "<<ref<<endl;

    x = 300;
    cout<<"Val of x: "<<x<<" & ref is: "<<ref<<endl;

    ref = 400;
    cout<<"Val of x: "<<x<<" & ref is: "<<ref<<endl;


    cout<<"Printing vector value by Referencing"<<endl;

    vector<string> name {"Bremen","Hamburg","Hannover"};

    for (auto str_1: name)
        cout<<str_1<<" ";
    cout<<endl;


    cout<<"---------------------------------------"<<endl;

    for (auto str_1: name)
        str_1 = "Berlin";
    for (auto str_1:name)
        cout<<str_1<<" ";
    cout<<endl;
    
    cout<<"--------------Value change by referencing-------------------------"<<endl;


    for(auto &str_1:name)
        str_1 = "Berlin";
    for(auto str_1:name)
        cout<<str_1<<" ";
    cout<<endl;




    return 0;
}