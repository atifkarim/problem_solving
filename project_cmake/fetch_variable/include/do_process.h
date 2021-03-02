# include <iostream>
# include "config_variable.h"
using namespace std;

class do_process{

        int class_var_x;
    public:
        do_process(int x_): class_var_x(x_){}
        // int class_var_x;
        void show_class_do_process();
        void show_struct_data(configuration_parameter* cfg);
};