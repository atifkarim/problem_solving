/**
 * Usually this file has no necessity . it is for a test 
 * purpose to check how to merge/ attach / bind class
 * template with pybind. In the following step I will try to
 * make a class template whch will only contain a header file
 */

#include "using_class_type_key.h"
#include <iostream>

template <typename T>
void Derived_1<T> :: Show(T data_derived)
{
    std::cout<<"called Show from Derived_1 with value of data_derived: "<<data_derived<<std::endl;
}


template <typename T>
void DO_SUB<T> :: Write(T data)
{
    std::cout<<"Add data+x: "<<data+x<<std::endl;
}