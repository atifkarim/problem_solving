/// This file will show hoe to send a pointer to a function as pointer arg
/**
 * \command_to_execute : valgrind --leak-check=full --show-leak-kinds=all -v ./binary_file
 * source : https://www.geeksforgeeks.org/passing-reference-to-a-pointer-in-c/
 *
 **/

#include <iostream>

void op_calculation(unsigned int*  ip_ptr_array_,
                    unsigned int   ip_size_,
                    unsigned int** op_ptr_array_,
                    unsigned int*  op_size_)
{
	*(op_size_) = ip_size_ + 2;
	// std::cout<<"op_size_ address: "<<op_size_<<std::endl;
	// std::cout<<"op_size_ value: "<<*(op_size_)<<std::endl;

	// unsigned int local[*(op_size_)];
	unsigned int* local = new unsigned int[*(op_size_)];
	// std::cout<<"making local array to be pointed by op_ptr_array_\n";
	for (unsigned int i = 0; i< *(op_size_); i++)
	{
		local[i]=i+1*3;
		// std::cout<<local[i]<<" ";
	}
	// std::cout<<"\n";
	*op_ptr_array_ = &local[0];
	local[3] = 87; // for checking pointer charecter
	// for (unsigned int i = 0; i < *(op_size_); i++)
	// 	std::cout<<"array address: "<<&local[i]<<" ,op_ptr_array address: "<<(*op_ptr_array_)+i<<" ,val of array: "<<local[i]<<" ,val at op_ptr_array: "<<*((*op_ptr_array_)+i)<<std::endl;
		// here value and addresses are same which is desired
	// delete [] local;
}

int main()
{
	unsigned int ip_size = 10;
	unsigned int* ip_ptr_array = new unsigned int[ip_size];

	unsigned int op_size;
	unsigned int* op_ptr_array;

	for(unsigned int i = 0; i < ip_size; i++)
	{
		ip_ptr_array[i] = i+2*2;
	}

	op_calculation(ip_ptr_array,
	            ip_size,
	            &op_ptr_array,
	            &op_size);
	
	// std::cout<<"Value printing after operation of op_calculation function\n";
	// std::cout<<"op_size: "<<op_size<<std::endl;

	// std::cout<<"op_ptr_array\n";
	for(unsigned int i = 0; i < op_size; i++)
		std::cout<<"Address: "<<(op_ptr_array+i)<<" , Value: "<<*(op_ptr_array+i)<<"\n";
        /* Here only addresses are same with `local array` and
        address pointed by op_ptr_array_ pointer` which you will find in op_calculation
        function but values are different*/
    std::cout<<"\n";

	delete [] ip_ptr_array;
	delete [] op_ptr_array;

	return 0;
}