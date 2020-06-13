/*#include <iostream>
#include <thread>

using namespace std;

typedef unsigned long long u_l;

static void SimpleThread(u_l& a)  // compile error
//static void SimpleThread(int a)     // OK
{
    cout << __PRETTY_FUNCTION__ << ": is here : " << a << endl;
}

int main()
{
    u_l a = 6;

    auto thread1 = std::thread(SimpleThread, std::ref(a));

    thread1.join();
    return 0;
}
*/

#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
using namespace std;
using namespace std::chrono;
typedef long long int  ull;
 
void findEven(ull start, ull end, ull* EvenSum) {
	for (ull i = start; i <= end; ++i){
		if (!(i & 1)){
			*(EvenSum) += i;
		}
	}
}
 
void findOdd(ull start, ull end, ull* OddSum) {
	for (ull i = start; i <= end; ++i){
		if (i & 1){
			(*OddSum) += i;
		}
	}
}
 
int main() {
 
	ull start = 0, end = 1900000000;
 
	ull OddSum = 0;
	ull EvenSum = 0;
 
    auto startTime = high_resolution_clock::now(); 
 
	// // WITH THREAD
    std::thread t1(findEven, start, end, &(EvenSum));
    std::thread t2(findOdd, start, end, &(OddSum));
 
	t1.join();
	t2.join();
 
	// // WITHOUT THREAD
	// findEven(start,end, &EvenSum);
	// findOdd(start, end, &OddSum);
    auto stopTime = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stopTime - startTime);
 
	cout << "OddSum : " << OddSum << endl;
	cout << "EvenSum : " << EvenSum << endl;
 
	cout << "Sec: " << duration.count()/1000000 << endl;
 
	return 0;
}