/// This file will show how to send a pointer to a function as pointer arg
/**
 * \command_to_execute : valgrind --leak-check=full --show-leak-kinds=all -v ./binary_file
 * source : https://www.geeksforgeeks.org/passing-reference-to-a-pointer-in-c/
 *
 **/

#include <iostream>


/// The funcion take a pointer to pointer argument
/**
 * It point to an array which is generated inside fo the function
 * op_ptr_array_ pointer points to that array
 * thus from the main function op_ptr_array pointer also points to that same value/ array
 **/
void algo_fun(unsigned int*  ip_ptr_array_,
              unsigned int   ip_size_,
              unsigned int** op_ptr_array_,
              unsigned int*  op_size_)
{
	*(op_size_) = ip_size_ + 2;
	// std::cout<<"op_size_ address: "<<op_size_<<std::endl;
	// std::cout<<"op_size_ value: "<<*(op_size_)<<std::endl;

	// Wrong approach as while the function ends then array `local` will be out of the scope and invalid
	// unsigned int local[*(op_size_)];

	// following approach is good as it allocate dynamic memory
	unsigned int* local = new unsigned int[*(op_size_)];

	for (unsigned int i = 0; i< *(op_size_); i++)
	{
		local[i]=i+1*3;
	}

	*op_ptr_array_ = &local[0];
	local[3] = 87; // for checking pointer charecter
	// for (unsigned int i = 0; i < *(op_size_); i++)
	// 	std::cout<<"array address: "<<&local[i]<<" ,op_ptr_array address: "<<(*op_ptr_array_)+i<<" ,val of array: "<<local[i]<<" ,val at op_ptr_array: "<<*((*op_ptr_array_)+i)<<std::endl;
}

int main()
{
	// input array's contetnt
	unsigned int ip_size = 10;
	unsigned int* ip_ptr_array = new unsigned int[ip_size];

	// output data
	unsigned int op_size;
	unsigned int* op_ptr_array;

	// filling input array
	for(unsigned int i = 0; i < ip_size; i++)
	{
		ip_ptr_array[i] = i+2*2;
	}

	// function calling to get output data
	algo_fun(ip_ptr_array,
	         ip_size,
	         &op_ptr_array,
	         &op_size);

	delete [] ip_ptr_array;
	delete [] op_ptr_array;

	return 0;
}