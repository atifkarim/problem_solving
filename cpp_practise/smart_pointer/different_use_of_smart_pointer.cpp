/**
 * regarding getting adress RO changing variable's value https://stackoverflow.com/questions/53977252/unique-pointer-vs-raw-pointer
 * https://www.learncpp.com/cpp-tutorial/15-5-stdunique_ptr/
 * https://www.internalpointers.com/post/beginner-s-look-smart-pointers-modern-c
 */

#include <iostream>
#include <memory>

using namespace std;

class Test{
	 private:
			int data;
	 public:
			Test(): data{0}{cout<<"Test constructor: "<<data<<endl;}
			Test(int data_1):data{data_1}{cout<<"Here Test constructor: "<<data<<endl;}
			int get_data() const {return data;}
			~Test(){cout<<"Destructor is called for data: "<<data<<endl;}
};

void print_array(int * loaded_array, size_t loaded_length){
	for(size_t i = 0; i < loaded_length; i++)
	{
		cout<<"val at ["<<i<<"]: "<<*(loaded_array+i)<<endl;
	}
}

void make_new_line()
{
	cout<<"\n\n";
}

int main(){
	{
	/**
	 * general pointer
	 */
	int b = 20;
	int * gn_ptr = &b;
	cout<<"b address: "<<&b<<endl;
	cout<<"gn_ptr address: "<<gn_ptr<<endl;
	cout<<"initially b: "<<b<<" and gn_ptr: "<<*gn_ptr<<endl;
	*gn_ptr = 87;
	cout<<"later b: "<<b<<" and gn_ptr: "<<*gn_ptr<<endl;
	}
	/****************************
	 ******* SMART POINTER ******
	 ****************************
	 */
	{
	/**
	 * Unique pointer
	 */
	int a = 120;
	/**
	 * create a brand new int object and initialize it to the current value of a.
	 * here you will not get same address for &a and p1.get()
	 * */
	std::unique_ptr<int> p1{new int {a}};
	cout<<"a val: "<<a<<" &a address: "<<&a<<endl;
	cout<<"p1 val: "<<*p1<<" and p1.get(): "<<p1.get()<<endl;

	// Another way of making unique pointer
	int c = 87;
	std::unique_ptr<int> p2 = std::make_unique<int>(c);
	cout<<"c val: "<<c<<" &c address: "<<&c<<endl;
	cout<<"p2 val: "<<*p2<<" and p2.get(): "<<p2.get()<<endl;

	/**
	 * Now you will get the behavior of the RAW pointer regarding chnaging value or getting same address
	 * However that brings with it other problems, like p1 taking over the ownership of &a, and attempting 
	 * to free that memory when p1 is destructed (which is not possible).
	 **/
	
	// std::unique_ptr<int> p1(&a);
	// cout<<"a val: "<<a<<" & a address: "<<&a<<endl;
	// cout<<"p1 val: "<<*p1<<" and p1.get(): "<<p1.get()<<endl;
	// *p1 = 65;
	// cout<<"a val: "<<a<<" & a address: "<<&a<<endl;
	// cout<<"p1 val: "<<*p1<<" and p1.get(): "<<p1.get()<<endl;

	/**
	 * Copy is not possible in unique_pointer
	 */
	// std::unique_ptr<int> copy_ptr = p2;
	std::unique_ptr<int> move_ptr = std::move(p2);
	cout<<"c val: "<<c<<" &c address: "<<&c<<endl;
	cout<<"move_ptr val: "<<*move_ptr<<" and move_ptr.get(): "<<move_ptr.get()<<endl;
	// Now p2 has totally gone.

	/**
	 * Making Array
	 */
	std::unique_ptr<int[]> source_samples_unique_ptr = std::make_unique<int[]>(50);
	for (size_t i=0; i < 50; i++)
	{
		source_samples_unique_ptr[i] = i+5;
	}
	
	int *source_samples = source_samples_unique_ptr.get();
	// print_array(source_samples, 50);
	}

	{
		/**Class
		 */
		make_new_line();
		std::unique_ptr<Test> t5 = std::make_unique<Test> (1400);
		cout<<"Accessing get_data fucntion by t5 : "<<t5->get_data ()<<endl;
	}

	{

	/**
	 * Shared ptr usage
	 */
	make_new_line();
	int var1 = 54;
	std::shared_ptr<int> shr_p1{new int {var1}};
	cout<<"var1: "<<var1<<" , adress &var1: "<<&var1<<endl;
	cout<<"*shr_p1: "<<*shr_p1<<" , adress shr_p1.get(): "<<shr_p1.get()<<endl;
	std::shared_ptr<int> shr_p2 = shr_p1;
	cout<<"copying done from shr_p1 to shr_p2\n";
	cout<<"*shr_p2: "<<*shr_p2<<" , adress shr_p2.get(): "<<shr_p2.get()<<endl;

	// shared ptr can count how many times obj are used by the pointers
	cout<<"shr_p1 count: "<<shr_p1.use_count()<<endl;
	cout<<"shr_p2 count: "<<shr_p2.use_count()<<endl;

	/**
	 * Another way of declaring shred_ptr
	 */
	int var2 = 32;
	std::shared_ptr<int> shr_p3 = std::make_shared<int>(var2);
	cout<<"var2: "<<var2<<" , adress &var2: "<<&var2<<endl;
	cout<<"*shr_p3: "<<*shr_p3<<" , adress shr_p3.get(): "<<shr_p3.get()<<endl;
	}

	{
		/**Class
		 */
		make_new_line();
		std::shared_ptr<Test> t6 = std::make_shared<Test> (1400);
		cout<<"Accessing get_data fucntion by t6 : "<<t6->get_data ()<<endl;
	}

	{

	/**
	 * Weak ptr introduction
	 * You can only create a std::weak_ptr out of a std::shared_ptr or another std::weak_ptr
	 */
	make_new_line();
	int v1 = 54;
	std::shared_ptr<int> shr_ptr_1 = std::make_shared<int>(v1);
	std::weak_ptr<int> p_weak1(shr_ptr_1);
	std::weak_ptr<int> p_weak2(p_weak1);
	cout<<"val of shr_ptr_1: "<<shr_ptr_1<<" ,address of shr_ptr_1: "<<shr_ptr_1.get()<<endl;
	std::cout << "1. p_weak1 " << (p_weak1.expired()?"is":"is not") << " expired\n";
	std::cout << "1. p_weak2 " << (p_weak2.expired()?"is":"is not") << " expired\n";

	/**
	 * couting with weak pointer
	 */
	cout<<"counting: "<<shr_ptr_1.use_count()<<endl;
	cout<<"counting: "<<p_weak1.use_count()<<endl;
	cout<<"counting: "<<p_weak2.use_count()<<endl;

	/** To get the value of a weak_ptr:: you cannot dereference a weak pointer. 
	 * you have to lock it, get a shared one from it and use that one.
	 * But then be conscious about it that , if you reset the previous shared pointer,
	 * here it is "shr_ptr_1", weak pointer will not be expired. So if you remove the
	 * following 2 lines then weak pointer will be expired if shr_ptr_1 is done reset
	 * operation. Or reset this new_shr also.
	 */
	auto new_shr = p_weak1.lock(); // p_weak2 is also usable
	cout<<"counting: "<<new_shr.use_count()<<endl;
	cout<<"val of new_shr: "<<*new_shr<<" , address of new_shr: "<<new_shr.get()<< endl;

	shr_ptr_1.reset();
	new_shr.reset();
	cout<<"val of shr_ptr_1: "<<shr_ptr_1<<" ,address of shr_ptr_1: "<<shr_ptr_1.get()<<endl;
	std::cout << "1. p_weak1 " << (p_weak1.expired()?"is":"is not") << " expired\n";
	std::cout << "1. p_weak2 " << (p_weak2.expired()?"is":"is not") << " expired\n";
	}

	{
	make_new_line();
	cout<<"Accessing class using Weak Pointer\n";
	std::shared_ptr<Test> t7 = std::make_shared<Test>(56);
	cout<<"Accessing get_data fucntion by t7 : "<<t7->get_data ()<<endl;
	// std::weak_ptr<Test> p_weak1(t7);
	// cout<<"Accessing get_data fucntion by p_weak1 : "<<p_weak1->get_data ()<<endl;

	}


	return 0;

}
