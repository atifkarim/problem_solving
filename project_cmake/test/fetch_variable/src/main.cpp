#include "do_process.h"
#include <iostream>
using namespace std;

int main(){

    cout<<"main process is called"<<endl;
    do_process obj_do_process(9);
    obj_do_process.show_class_do_process();
    // cout<<"hello world\n";

    configuration_parameter init_cfg;
    configuration_parameter_cfg_default(&init_cfg);

    obj_do_process.show_struct_data(&init_cfg);

    return 0;
}