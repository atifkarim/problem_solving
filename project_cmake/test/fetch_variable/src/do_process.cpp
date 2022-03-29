# include "do_process.h"
#include <iostream>
using namespace std;


void do_process::show_class_do_process(){
    cout<<"class_var_x : "<<class_var_x<<endl;
}


void do_process::show_struct_data(configuration_parameter* cfg){
    cout<<"struct data cfg->a : "<<cfg->a<<endl;
}

void configuration_parameter_cfg_default(configuration_parameter* cfg){
    cout<<"cfg->a: "<<cfg->a<<endl;
}