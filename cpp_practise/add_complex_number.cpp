/**
 * @Author: MD Atif Bin Karim
 * @Date:   01-01-1970 01:00:00
 * @Last Modified by:   MD Atif Bin Karim
 * @Last Modified time: 19-04-2023 16:58:34
 */
#include <iostream>

using namespace std;

class Complex{

    private:
        int first, second;
    public:
        void setData(int a, int b);
        void showData();
        Complex addComplexData(Complex number);

};

void Complex::setData(int a, int b){
    first = a; second = b;
}

void Complex::showData(){
    std::cout << "first: " << first << " , second: " << second << std::endl;
}

Complex Complex::addComplexData(Complex number){
    Complex temp;
    std::cout << "temp.first: " << temp.first << std::endl;
    std::cout << "temp.second: " << temp.second << std::endl;

    std::cout << "first: " <<  first << std::endl;
    std::cout << "second: " << second << std::endl;

    std::cout << "number.first: " << number.first << std::endl;
    std::cout << "number.second: " << number.second << std::endl;

    temp.first  = first  + number.first;
    temp.second = second + number.second;
    return temp;
}


int main(int argc, char const *argv[])
{
    Complex c1, c2, c3;
    c1.setData(5, 15);
    c2.setData(4, 9);

    c1.showData();
    c2.showData();

    c3 = c2.addComplexData(c1);
    c3.showData();
    return 0;
}
