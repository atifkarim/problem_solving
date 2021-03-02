#ifndef _USING_CLASS_TYPE_KEY_
#define _USING_CLASS_TYPE_KEY_

#include <memory>
#include "temp_header.h"
#include <iostream>


template <typename T>
using use_base_abstract_class = std::shared_ptr<Base<T>>;

template <typename T>
using use_do_sub_class_template = std::shared_ptr<DO_SUB<T>>;


#endif