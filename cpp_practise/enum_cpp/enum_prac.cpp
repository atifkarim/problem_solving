// Example program to set string value for ENUM class key
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
 * declare the ENUM Class
*/
enum class ERROR_ENUM
{
 Fisrt_Error ,
 Second_Error,
 Third_Error,
};

/**
 * A class with a member variable which type is the declared ENUM type
 */
class Print_Error{
    public:
        ERROR_ENUM var_error_num;
};

vector<string>error_tbl { "Fiction", "NonFiction", "Periodical" }; // string vector for the ENUM key

ostream& operator<<(ostream& os, ERROR_ENUM error_enum) { return os << error_tbl[int(error_enum)]; } // operator overloading

/**
 * casting, but it is not related to the class Print_Error. It is for printing the ENUM key value.
 * goal of this piece is to "get output the value of an enum class in C++11"
*/
// template<typename T>
// std::ostream& operator<<(typename std::enable_if<std::is_enum<T>::value, std::ostream>::type& stream, const T& e)
// {
//     return stream << static_cast<typename std::underlying_type<T>::type>(e);
// }


int main()
{
    {
        /**
         * here operator overloading takes place
        */
        cout<<"val first error: "<< ERROR_ENUM::Fisrt_Error<<endl;
        cout<<"val second error: "<< ERROR_ENUM::Second_Error<<endl;
        cout<<"here first error casting int val: "<<static_cast<int>(ERROR_ENUM::Fisrt_Error)<<endl;

        if (static_cast<int>(ERROR_ENUM::Fisrt_Error)<56){
        cout<<"hello\n";
        }
    }


    {
        /**
         * A simple way to print string value for ENUM key. Independent of any class/ class template or operator overloading
        */
       /**
        * reason of using vector is that this container can also be used in struct/ class as member variable
        * without giving any static size. Array cannot do this. If array is used as a member variable in struct and class
        * then must size should be given 
        */
       
       std::vector<std::string> colour_names_vec = {"hello", "who","you"}; 
       cout<<"colour_names_vec size: "<<colour_names_vec.size()<<endl;
        const char *colour_names[] = { "black", "green", "blue", "brown" };

        //ERROR_ENUM my_error = Third_Error;
        cout << "the error is --> " << colour_names[static_cast<int>(ERROR_ENUM::Fisrt_Error)]<< endl;
        cout << "the error using color_names_vec --> " << colour_names_vec[static_cast<int>(ERROR_ENUM::Fisrt_Error)]<< endl;
        }

    {
        /* usage of class to print enum class key value using string*/
        Print_Error error_obj;
        error_obj.var_error_num = ERROR_ENUM(1);
        cout << error_obj.var_error_num<<endl;

    }
    return 0;
  
}
