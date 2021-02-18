#include "class_temp_abstract_header.h"
#include <string>
#include <iostream>
/**
 * function definition for class template virtual function
 */

void Der::Der::show_der_val(){
    std::cout<<"val of derived class private mem is: "<<derived_Variable<<std::endl;
}

// void Der::do_something(int s){
//     std::cout<<"using virtual function from derived class when s:"<<s<<endl;
// }

