// https://stackoverflow.com/questions/12856845/iterating-through-const-char-array

#include <cstring>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	char const* name = "Atif";
	cout<<"here name is: "<<name<<" & address is &name: "<<&name<<endl;
	for(int i = 0; name[i] != 0; i++)
	{
		cout<<"val is: "<<*(name+i)<<" & address is (void*)(name+i): "<<(void*)(name+i)<<"  and name+i: "<<name+i<<"  and &(name+i): "<<name<<endl;
	}
	// try name+i
	return 0;
}
