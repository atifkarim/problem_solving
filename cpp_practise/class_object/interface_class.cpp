/**
 * Demosntration of Interface Class
 */

#include <iostream>
#include <string>
using namespace std;

class IBase_Class{
    public:
        virtual void loadFile(std::string &filename) = 0;
        virtual void showFile()= 0;

        virtual ~IBase_Class() {} // make a virtual destructor in case we delete an IErrorLog pointer, so the proper derived destructor is called
};

class Child : public IBase_Class{
    public:
        void loadFile(std::string &filename);
        void showFile();
};

void Child :: loadFile(std::string &filename){
    cout<<"Using Child loaded filename is: "<<filename<<endl;
}

void Child :: showFile(){
    cout<<"Using Child Display is finished"<<endl;
}

class Grand_Child : public IBase_Class{
    public:
        void loadFile(std::string &filename);
        void showFile();
};

void Grand_Child :: loadFile(std::string &filename){
    cout<<"Using Grand_Child loaded filename is: "<<filename<<endl;
}

void Grand_Child :: showFile(){
    cout<<"Using Grand_Child Display is finished"<<endl;
}


void helper_function(std::string filename_, IBase_Class &log)
{
    log.loadFile(filename_);
}

int main(){
    cout<<"Demosntration of Interface Class will take place here\n";
    Child child_obj;
    helper_function("vscode_tutorial", child_obj);

    Grand_Child grand_child_obj;
    helper_function("Qt_tutorial", grand_child_obj);
    return 0;
}