// weak_ptr::expired example
#include <iostream>
#include <memory>
using namespace std;

int main () {
	{
		std::shared_ptr<int> shared = std::make_shared<int>(10);
		std::weak_ptr<int> weak(shared);
		std::weak_ptr<int> weak_2(weak);

		std::cout << "1. weak " << (weak.expired()?"is":"is not") << " expired\n";
		std::cout << "1. weak_2 " << (weak_2.expired()?"is":"is not") << " expired\n";

		shared.reset();

		std::cout << "2. weak " << (weak.expired()?"is":"is not") << " expired\n";
		std::cout << "2. weak_2 " << (weak_2.expired()?"is":"is not") << " expired\n";
	}


	{
		cout<<"\n";
		int v1 = 54;
		std::shared_ptr<int> shr_ptr_1 = std::make_shared<int>(v1);
		std::weak_ptr<int> p_weak1(shr_ptr_1);
		std::weak_ptr<int> p_weak2(p_weak1);
		// cout<<"val of shr_ptr_1: "<<shr_ptr_1<<" ,address of shr_ptr_1: "<<shr_ptr_1.get()<<endl;
		std::cout << "1. p_weak1 " << (p_weak1.expired()?"is":"is not") << " expired\n";
		std::cout << "1. p_weak2 " << (p_weak2.expired()?"is":"is not") << " expired\n";

		/**
		 * To get the value of a weak_ptr:: you cannot dereference a weak pointer. 
		 * you have to lock it, get a shared one from it and use that one.
		 * But then be conscious about it that , if you reset the previous shared pointer,
		 * here it is "shr_ptr_1", weak pointer will not be expired. So if you remove the
		 * following 2 lines then weak pointer will be expired if shr_ptr_1 is done reset
		 * operation. Or reset this new_shr also.
		 */
		auto new_shr = p_weak1.lock(); // p_weak2 is also usable
		cout<<"val of new_shr: "<<*new_shr<<" , address of new_shr: "<<new_shr.get()<< endl;

		shr_ptr_1.reset();
		cout<<"After resetting val of shr_ptr_1: "<<shr_ptr_1<<" ,address of shr_ptr_1: "<<shr_ptr_1.get()<<endl;
		std::cout << "1. p_weak1 " << (p_weak1.expired()?"is":"is not") << " expired\n";
		std::cout << "1. p_weak2 " << (p_weak2.expired()?"is":"is not") << " expired\n";

		p_weak1.reset();
		std::cout << "1. p_weak1 " << (p_weak1.expired()?"is":"is not") << " expired\n";
		std::cout << "1. p_weak2 " << (p_weak2.expired()?"is":"is not") << " expired\n";

	}

  return 0;
}