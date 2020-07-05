#include <iostream>
#include <string>
using namespace std;

class NonRepeatingChar{

    private:
        char *name_1;
    public:
        NonRepeatingChar(char *);
        void display(){
            cout<<"val is: "<<name_1<<endl;
        };
};

NonRepeatingChar::NonRepeatingChar(char name[]){ // just write string name OR char name []
    cout<<"constructor is called and val is: "<<name<<endl;
    name_1 = name;
}

int main(){

    NonRepeatingChar obj_1("Atif");

    obj_1.display();

    
    return 0;
}