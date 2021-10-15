/**
 * This code will show how to use struct as return type from Class type datatype.
 * Same type value could be used as Struct data member and get the value from function
 * of the class and return them alltogether
 */

#include <iostream>
#include <bitset>
#include <cmath>

class Do_Fun
{
	public:
		Do_Fun(int a, int b, float c)
		: a_(a), b_(b), c_(c)
		{std::cout<<"Constructor is called\n";}

		~ Do_Fun() {std::cout<<"Destructor is called\n";}

		float do_add() const;
		float do_sub() const;
		int do_mul() const;

		// struct which will return some function value of Do_Fun class
		struct Do_Fun_Struct {
			unsigned int test_a;
			float test_b; // it will take do_add() function return value
			void set_struct_value(unsigned int x); // will be used to set value of test_a
			void set_struct_val_from_parent_class(Do_Fun &b); // will be used to set value of test_b using Do_Fun class
		};
		Do_Fun_Struct do_fun_struct_obj; // after declaring struct object can be created here

		struct Do_Job_Struct
		{
			float test_c;
			void set_value_c_from_class(Do_Fun &b);
		};

		// struct to see how can be returned fromm function
		struct Status{
			int a;
			float b;
			int c;
		};

		void Get_Status(Status *ptr_status);
		Status Get_Status_Ptr(Status *ptr_status);
		Status Get_Status_Ref(Status &ref_status);

	protected:
		int a_;
		int b_;
		float c_;

};

float Do_Fun::do_add() const
{
	return a_ + c_;
}

float Do_Fun::do_sub() const
{
	return a_ - c_;
}

int Do_Fun::do_mul() const
{
	return b_ * c_;
}

void Do_Fun::Do_Fun_Struct::set_struct_value(unsigned int x)
{
	test_a = x;
}

void Do_Fun::Do_Fun_Struct::set_struct_val_from_parent_class(Do_Fun &b)
{
	test_b = b.do_add();
}

void Do_Fun::Do_Job_Struct::set_value_c_from_class(Do_Fun &b)
{
	test_c = b.do_sub();
}

void Do_Fun::Get_Status(Status *ptr_status)
{
	ptr_status-> a = 65;
}

Do_Fun::Status Do_Fun::Get_Status_Ptr(Status *ptr_status)
{
	ptr_status-> b = 65.87;
	return *ptr_status;
}

Do_Fun::Status Do_Fun::Get_Status_Ref(Status &ref_status)
{
	ref_status.c = 154;
	return ref_status;
}

// return bit value from unsigned int
void find_bit_value(unsigned int x)
{
	unsigned int value = x;
	std::string value_bin = std::bitset<2>(value).to_string();
	std::cout<<"value_bin: "<<value_bin<<"\n";
	std::cout<<"value_bin len: "<<value_bin.length()<<"\n";
	std::cout<<"bit 0: value_bin[0]: "<<value_bin[0]<<std::endl;
	std::cout<<"bit 1: value_bin[1]: "<<value_bin[1]<<std::endl;

	int conv_int = std::stoi(value_bin);
	std::cout<<"conv_int: "<<conv_int<<std::endl;

	// charecter conversion to int
	// https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c
	int conv_char = value_bin[0] - '0';
	std::cout<<"conv_char: "<<conv_char<<std::endl;
	std::cout<<"add 3 with conv_char: "<<conv_char + 3<<std::endl;
}

int main()
{
	// instance of Do_Fun class
	Do_Fun fun_obj(5,6,3.5);

	// print result of do_add() function
	std::cout<<"result of do_add: "<<fun_obj.do_add()<<std::endl;

	// set member value of Do_Fun_Struct name test_a
	fun_obj.do_fun_struct_obj.set_struct_value(76);

	// print member value of Do_Fun_Struct name test_a
	std::cout<<"value of test_a: "<<fun_obj.do_fun_struct_obj.test_a<<std::endl;

	// set member value of Do_Fun_Struct name test_b with the help of return value of do_add() function from Do_Fun class
	fun_obj.do_fun_struct_obj.set_struct_val_from_parent_class(fun_obj);

	// print member value of Do_Fun_Struct name test_b
	std::cout<<"value of test_b: "<<fun_obj.do_fun_struct_obj.test_b<<std::endl;

	// here object of Do_Job_Struct struct will be created here and set function value form here
	Do_Fun::Do_Job_Struct job_struct_obj;
	job_struct_obj.set_value_c_from_class(fun_obj);

	// print value of test_c of Do_Job_Struct which is set by the value of do_sub() function of Do_Fun class
	std::cout<<"value of test_c: "<<job_struct_obj.test_c<<std::endl;

	// return value as struct
	Do_Fun::Status ret_status_obj;
	fun_obj.Get_Status(&ret_status_obj);
	std::cout<<"status struct a: "<<ret_status_obj.a<<std::endl;

	fun_obj.Get_Status_Ptr(&ret_status_obj);
	std::cout<<"status struct b: "<<ret_status_obj.b<<std::endl;

	fun_obj.Get_Status_Ref(ret_status_obj);
	std::cout<<"status struct c: "<<ret_status_obj.c<<std::endl;

	find_bit_value(2);

	std::string a = "karim";
	for (int i = 0; i< a.length(); i++)
	{
		std::cout<<a[i]<<" : ";
	}
	std::cout<<"\n";

	// if a value is unsigned int but I need to get the signed bit presentationn then do following
	unsigned int given_uint_num = 4294967198;
	std::cout<<"corresponsing signed num: "<<static_cast<int>(given_uint_num)<<std::endl;
	// Another way
	int conv_sign_num = given_uint_num;
	std::cout<<"conv_sign_num: "<<conv_sign_num<<std::endl;

	// log calc to check it return float or not
	float log_calc = 10 * log10(2);
	std::cout<<"log calc: "<<log_calc<<std::endl;


	return 0;
}
