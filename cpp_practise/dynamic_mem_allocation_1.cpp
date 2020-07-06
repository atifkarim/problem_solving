/*
This code shows the usage of new variable to assign dynamic memory by using class
*/

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class StudentInfo {
    private:
        char name[25];
        char city[25];
        int ID;
    public:
        string color;
        float efficiency;
        double power;

        // constructor
        StudentInfo(char *name_1, char *city_1, int ID_1){
            strcpy(name,name_1);
            strcpy(city,city_1);
            ID = ID_1;
        }

        // Printing information
        void PrintInfo(){
            cout<<"\nInformation of Student\n";
            cout<<"####################################\n";
            
            cout<<"Student name: "<<name<<"\nCity name: "<<city<<"\nID: "<<ID<<endl;
        }

        void PrintInfo_PublicVar(){
            cout<<"\n\nNow checking Public variable and function of class using dynamic memory"<<endl;
            
            cout<<"Student name: "<<name<<"\nCity name: "<<city<<"\nID: "<<ID<<endl;
            cout<<"Fav color: "<<color<<"\nEfficiency: "<<efficiency<<"\nPower: "<<power<<endl;
        }
};

class StudentArray{
    public:
        int row;
        int col;
        int *MakeArray()
        {
            cout<<"Please give value for the array whose row: "<<row<<" and col: "<<col<<endl;
            int my_array[row][col];
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++){
                    cout<<"my_array["<<i<<"]["<<j<<"]: ";
                    cin>>my_array[i][j];
                }   
            }

            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cout<<my_array[i][j]<<" ";
                }
                cout<<endl;
            }
            /*
            int *pointer_array {nullptr};
            pointer_array = &my_array[0][0];
            */

            //changed when I am in the train

            int *pointer_array{*my_array};

            cout<<"Mem address from Function of class: "<<&my_array[0][0]<<" and address:"<<pointer_array<< endl;
            cout<<"val here: "<<*pointer_array<<endl;
            // return &my_array[0][0];
            cout<<"finishhhhhhh"<<endl;
            cout<<"*******: "<<my_array[0][0]<<endl;
            return pointer_array;
        }

        
};

int main(){

    int *ptr;
    ptr = new int;
    *ptr=10;
    cout<<"Mem val of ptr: "<<ptr<<" and Stored val of ptr: "<<*ptr<<endl;
    ptr = new int{50}; // Instead of second braces you can give first braces
    cout<<"Mem val of ptr: "<<ptr<<" and Stored val of ptr: "<<*ptr<<endl;

    cout<<"\nWorking with CLASS\n";

    StudentInfo obj("Atif", "Bremen", 3062756);
    obj.PrintInfo();

    cout<<"\nNow Dealing with Dynamic allocation of Memory with different approach"<<endl;

    StudentInfo *obj_1;
    obj_1 = new StudentInfo("Shanto", "Hamburg", 123458);
    obj_1->PrintInfo();

    delete obj_1;

    cout<<"\nNow Dealing with Dynamic allocation of Memory"<<endl;
    StudentInfo *obj_2 = new StudentInfo("Moin Uddin","Dhaka", 45879);
    obj_2->PrintInfo();

    obj_2->color = "RED and Orange";
    obj_2-> efficiency = 0.45;
    obj_2-> power = 100.4578;

    obj_2->PrintInfo_PublicVar();

    delete obj_2;

    cout<<"\n\nMaking array using pointer and new variable\n";
    // StudentArray *obj_3=new StudentArray;
    StudentArray obj_3;
    obj_3.row = 3;
    obj_3.col = 2;
    // int *array;
    int *my_array_1 {nullptr};
    my_array_1= obj_3.MakeArray();
    cout<<"finish in MAIN\n";
    cout<<"Address from main function: "<<*my_array_1<<" and val is: "<<my_array_1<<endl;
    cout<<"value from main: "<<*(my_array_1)<<endl;
    int p=0;
    for(int a=0;a<obj_3.row;a++){
        for(int b=0;b<obj_3.col;b++){
            cout<<p<<endl;
        }
        cout<<endl;
    }

    // delete obj_3;


    return 0;
}