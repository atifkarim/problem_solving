/*
This code will help to learn how to pass an object array to a function as argument.
It can take char or string as a input. Just comment out the line which are commented.
At bottom you will find another code which I have written to know how to pass object of a class to a functiuon as an argument.
*/

#include <iostream>
#include <string>
#include<cstring>

using namespace std;

class name_class{

    private:
        char name[25];
        // string name;
    public:
        void GetName(char *n){strcpy(name,n);}
        char *GetNAME (){return name;}

        // void GetName(string n){name = n;}
        // string GetNAME (){return name;}

        void Printname(){
            cout<<"Name: "<<name<<endl;
        }

};

void NameLength(name_class obj){
    int len ;
    len = strlen(obj.GetNAME());
    // len = obj.GetNAME().length();
    obj.Printname();
    cout<<"\tLength: "<<len<<endl;

}

int main(){

    name_class objname[5];
    char name[25];
    cout<<"Give the name list one by one"<<endl;
    for (int i =0;i<5;i++){
        cout<<"Name["<<i+1<<"]: ";
        cin>>name;
        objname[i].GetName(name);
    }

    cout<<"Now print the name"<<endl;

    for (int i=0;i<5;i++){
        objname[i].Printname();
    }

    cout<<"NOW CALLING Name_length function"<<endl;

    for(int i =0;i<5;i++){
        NameLength(objname[i]);
    }


    return 0;
}

/*#include <iostream>

using namespace std;

class NumberA{
    private:
        int a,b;
    public:
        NumberA(int,int);
        int ADD_Num(){
            cout<<"Now I am inside of the class's function"<<endl;
            cout<<"Sum is: "<<a+b<<endl;

            return a+b;
        }
};

NumberA::NumberA(int x, int y){
    cout<<"Constructor is here"<<endl;
    a=x; b=y;
}

void funcA(NumberA obj){
    cout<<"Look I am entered in the function A"<<endl;
    int getobjvalue;
    getobjvalue = obj.ADD_Num();
    cout<<"Function return from inside of class: "<<getobjvalue<<endl;
}

int main(){
    cout<<"Call Constructor"<<endl;
    NumberA obj(5,15);
    cout<<"Now calling function A"<<endl;
    funcA(obj);
    return 0;
}*/


