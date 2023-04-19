/**
 * @Author: MD Atif Bin Karim
 * @Date:   01-01-1970 01:00:00
 * @Last Modified by:   MD Atif Bin Karim
 * @Last Modified time: 20-04-2023 00:42:26
 */
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int x = 54;

    int * p1;
    int **p2;

    p1 = & x;
    p2 = &p1;

    std::cout << "value of x :         " << x    << endl
              << "value pointed by p1: " << *p1  << endl
              << "value pointed by p2: " << **p2 << endl;

    // Value is changed by double pointer p2
    **p2 = 34;
    cout << "--------------------------" << endl;
    std::cout << "value of x :         " << x    << endl
              << "value pointed by p1: " << *p1  << endl
              << "value pointed by p2: " << **p2 << endl;

    // Value is changed by single pointer p1
    *p1 = 24;
    cout << "--------------------------" << endl;
    std::cout << "value of x :         " << x    << endl
              << "value pointed by p1: " << *p1  << endl
              << "value pointed by p2: " << **p2 << endl;

    // Value is changed by variable x
    x = 7;
    cout << "--------------------------" << endl;
    std::cout << "value of x :         " << x    << endl
              << "value pointed by p1: " << *p1  << endl
              << "value pointed by p2: " << **p2 << endl;

    return 0;
}
