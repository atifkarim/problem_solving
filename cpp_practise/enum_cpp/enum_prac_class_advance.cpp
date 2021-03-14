#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Do_Base{
private:
    int a; int b;
public:
    Do_Base(int a_, int b_) : a(a_), b(b_){cout<<"ctr called for Do_Base\n";}

    enum class ERROR_ENUM
    {
     Fisrt_Error ,
     Second_Error,
     Third_Error,
    };
    int s = 98;
};

class Print_Error : public Do_Base{
    public:
        using Do_Base :: Do_Base;
        ERROR_ENUM var_error_num;
        // vector<string>error_tbl { "beginner error", "medium error", "fatal error" };

        // friend ostream& operator<<(ostream& os, Print_Error::ERROR_ENUM error_enum) { return os << Print_Error::error_tbl[int(error_enum)]; }
};

vector<string>error_tbl { "beginner error", "medium error", "fatal error" };

ostream& operator<<(ostream& os, Do_Base::ERROR_ENUM error_enum) { return os << error_tbl[int(error_enum)]; }

int main(){
    cout<<"started\n";
    Do_Base do_base_obj(1,2);

    Print_Error print_error_obj(4,5);
    print_error_obj.var_error_num = do_base_obj.ERROR_ENUM::Second_Error;
    // // print_error_obj.var_error_num = print_error_obj.ERROR_ENUM::Second_Error;
    cout<<"val s: "<<print_error_obj.s<<endl;
    cout <<"string val: "<< print_error_obj.var_error_num<<endl;
    // cout<<"vec: "<<print_error_obj.error_tbl[1]<<endl;

    return 0;
}