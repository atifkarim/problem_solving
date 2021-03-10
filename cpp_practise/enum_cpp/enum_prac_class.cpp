/**
 * here Do_Base class has a member variable(ERROR_ENUM) which type is Enum Class Type.
 * Print_Error inheritted Do_Base class. Also I have tried to make Print_Error in such
 * a way where it does not need inheritance. Both worked.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Do_Base{
private:
    int a; int b;
public:
    enum class ERROR_ENUM
    {
     Fisrt_Error ,
     Second_Error,
     Third_Error,
    };
    Do_Base(int a_, int b_, ERROR_ENUM error = ERROR_ENUM::Fisrt_Error)
                                     : a(a_), b(b_),error_val_(error) {cout<<"Do_Base class constructor is called\n";}
    int s = 98;
    const ERROR_ENUM error_val_; // const mem variable is initialized using constructor 

};

// class Print_Error : public Do_Base{
//     public:
//         using Do_Base :: Do_Base;
//         ERROR_ENUM var_error_num;
//         vector<string>error_tbl { "beginner error", "medium error", "fatal error" };
// };

class Print_Error{
    public:
        Do_Base::ERROR_ENUM var_error_num;
};

vector<string>error_tbl { "beginner error", "medium error", "fatal error" }; // this will be used as the string value supplier

ostream& operator<<(ostream& os, Do_Base::ERROR_ENUM error_enum) { return os << error_tbl[int(error_enum)]; }

int main(){

    Do_Base do_base_obj(1,2, Do_Base::ERROR_ENUM::Second_Error);
    cout<<"error_val_: "<<do_base_obj.error_val_<<endl;
    cout<<"static cast int const enum: "<<static_cast<int>(do_base_obj.error_val_)<<endl;

    // Print_Error print_error_obj(4,5); // will be used if inherittance concept used
    Print_Error print_error_obj;
    print_error_obj.var_error_num = do_base_obj.ERROR_ENUM::Second_Error;
    // print_error_obj.var_error_num = print_error_obj.ERROR_ENUM::Second_Error; // will be used if inherittance concept used
    // print_error_obj.var_error_num = print_error_obj.Do_Base::ERROR_ENUM::Second_Error; // will be used if inherittance concept used
    // cout<<"val s: "<<print_error_obj.s<<endl;
    cout <<"\nstring val: "<< print_error_obj.var_error_num<<endl;
    // cout<<"vec: "<<print_error_obj.error_tbl[1]<<endl;

    return 0;
}