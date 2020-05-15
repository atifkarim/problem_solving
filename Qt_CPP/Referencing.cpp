#include<iostream>
#include<vector>

using namespace std;

int val_ref(int &ref_1){
    int y = 56;
    ref_1=y;
    return ref_1;
}

int  main(){
    int x {200};
    int &ref{x};

    cout<<"Val of x: "<<x<<" & ref is: "<<ref<<" and address: "<<&ref<<endl;

    x = 300;
    cout<<"Val of x: "<<x<<" & ref is: "<<ref<<endl;

    ref = 400;
    cout<<"Val of x: "<<x<<" & ref is: "<<ref<<endl;

    cout<<"\n calling val_ref function and changing the value of x"<<endl;
    int g = val_ref(x);
    cout<<"Now val of x: "<<x<<" and val of g is: "<<g<<endl<<"\n\n";


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