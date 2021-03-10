#include <iostream>
using namespace std;

class Parent_Class
{
public:

	Parent_Class (const std::string& data_a = "a",
	              const std::string& data_b = "b",
	              const std::string& data_c = "c") :
	              DATA_A_(data_a),
	              DATA_B_(data_b),
	              DATA_C_(data_c) {}

	virtual ~Parent_Class() {}

	// Name of the corresponding top level VHDL component.
	const std::string DATA_A_;

	// Brief description
	const std::string DATA_B_;

	// Version string
	const std::string DATA_C_;

	void show_val_Parent_Class();
};

class Child_Class : public Parent_Class
{
public:
    using Parent_Class::Parent_Class;
	// Child_Class ():
	//    Parent_Class ("top_level_name",
	//                  "description_name",
	//                  "2")
	// 	{}

	virtual ~Child_Class() {}
};


void Parent_Class::show_val_Parent_Class(){
    cout<<"Parent class is revealed\n";
    cout<<"DATA_A_: "<<DATA_A_<<" , DATA_B_: "<<DATA_B_<<" , DATA_C: "<<DATA_C_<<endl;
}

int main(){
    Child_Class child_class_obj;
    child_class_obj.show_val_Parent_Class();

    Child_Class child_class_obj_repeat("x","y","z");
    child_class_obj_repeat.show_val_Parent_Class();
    return 0;
}

