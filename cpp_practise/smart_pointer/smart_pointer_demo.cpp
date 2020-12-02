// C++ program to illustrate the use of unique_ptr 
#include <iostream> 
#include <memory> 
using namespace std; 

class A { 
public: 
	void show() 
	{ 
		cout << "A::show()" << endl; 
	}

	void change_ptr(unique_ptr<A> &passed_pointer)
	{ 
		cout<<"passed\n";
	}
}; 

int main() 
{ 
	unique_ptr<A> p1(new A); 
	p1->show(); 

	// returns the memory address of p1 
	cout << p1.get() << endl; 

	// transfers ownership to p2 
	unique_ptr<A> p2 = move(p1); 
	p2->show(); 
	cout << p1.get() << endl; 
	cout << p2.get() << endl; 

	// transfers ownership to p3 
	unique_ptr<A> p3 = move(p2); 
	p3->show(); 
	cout << p1.get() << endl; 
	cout << p2.get() << endl; 
	cout << p3.get() << endl;

	unique_ptr<A> p6;
	p6->change_ptr(p6);

	return 0; 
} 