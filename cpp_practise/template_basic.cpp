/*
First code to learn the usage of template in cpp. This code is taken from geeksforgeeks
https://www.geeksforgeeks.org/templates-cpp/
*/

#include <iostream>
using namespace std;
template <typename T> T myMax(T x, T y) // Here instead of typename you can also write class.
{
    return (x > y) ? x : y;
}

int main()
{
    cout << myMax<int>(3, 8) << endl;
    cout << myMax(93, 11) << endl;
    cout << myMax<double>(3.0, 7.0) << endl;
    cout << myMax<char>('e', 't') << endl;
    return 0;
}