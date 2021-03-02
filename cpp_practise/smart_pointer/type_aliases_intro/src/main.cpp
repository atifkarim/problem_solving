#include <iostream>
#include <memory>
#include "using_class_type_key.h"
#include "temp_header.cpp"
using namespace std;

int main(){

    cout<<"Abstract class calling in general way\n";
    Derived_1<int> derived_obj_1(23,65);
    derived_obj_1.Show(78);

    cout<<"\nBase Abstract class calling with pointer type object\n";
    Base<int> *base_ptr_obj;
    Derived_1<int> derived_obj_2(6,8);
    base_ptr_obj = &derived_obj_2;
    base_ptr_obj->Show(-45);

    cout<<"\nBase Abstract class calling with type aliases\n";
    use_base_abstract_class<int> use_base_abstract_class_obj ;
    Base<int> *base_ptr_obj_alias = use_base_abstract_class_obj.get();
    Derived_1<int> derived_obj_3(61,96);
    base_ptr_obj_alias = &derived_obj_3;
    base_ptr_obj_alias->Show(561);
    cout<<"base_ptr_obj_alias gives sx: "<<base_ptr_obj_alias->sx<<endl;
    
    cout<<"\nDO_SUB class calling in general way\n";
    DO_SUB<int> do_sub_obj(98);
    do_sub_obj.Write(2);

    cout<<"\nDO_SUB class calling with type aliases\n";
    use_do_sub_class_template<int> use_do_sub_class_template_obj = std::make_shared<DO_SUB<int>>(7);
    use_do_sub_class_template_obj->Write(8);
    cout<<"shared ptr: "<<use_do_sub_class_template_obj.get()<<endl;
    cout<<"use_do_sub_class_template_obj gives q: "<<use_do_sub_class_template_obj->q<<endl;
    return 0;
}