/*
Basic of Inheritance from Niton Bangla book
*/

#include<iostream>
#include<cstring>
using namespace std;

class StudentInfo{
    char Name[50];
    char Id[20];
    public:
        StudentInfo(char *name_1, char *id_1){
            strcpy(Name,name_1);
            strcpy(Id,id_1);
        }

        void PrintStudentInfo(){
            cout<<"Directly from StudentInfo Class"<<endl;
            cout<<"Name: "<<Name<<endl;
            cout<<"Id: "<<Id<<endl;
        }
};

class RegInfo : public StudentInfo{
    char Nationality[50];
    float fees;

    public:
        RegInfo(char *name_1, char *id_1, char *nationality_1, float fees_1):StudentInfo(name_1, id_1){
            strcpy(Nationality,nationality_1);
            fees = fees_1;}

        void PrintRegInfo(){
            cout<<"\nNow I am from the derived class named RegInfo"<<endl;
            PrintStudentInfo();
            cout<<"nationality_1: "<<Nationality<<endl;
            cout<<"Fees: "<<fees<<endl;
            }
};


int main(){
    
    StudentInfo obj_1("Atif", "3062756");
    obj_1.PrintStudentInfo();

    cout<<"\n Work With derived class"<<endl;
    RegInfo obj_2("Atif", "3062756","Bangladeshi", 76.5);
    cout<<"This is calling only Base class function"<<endl;
    obj_2.PrintStudentInfo();

    cout<<"\nThis is calling both function from base and derived class"<<endl;
    obj_2.PrintRegInfo();
    
    return 0;
    }