/**
 * @Author: MD Atif Bin Karim
 * @Date:   01-01-1970 01:00:00
 * @Last Modified by:   MD Atif Bin Karim
 * @Last Modified time: 19-04-2023 17:56:42
 */
#include <iostream>

using namespace std;

class Complex{

    private:
        // variable to hold real and imag number
        int first, second;
    public:
        // This function sets the real and imag number
        void setData(int a, int b);

        // This function displays complex type value
        void showData();
        
        // This function adds two object by taking object as function argument
        Complex addComplexData(Complex number);

        // This function adds two object by doing operator overloading
        // Syntax:
        // while declare function->> return type operator operator_symbol_which_will_be_overloaded (param lists)
        // while define function- >> return_type class_name :: operator operator_symbol_which_will_be_overloaded (param lists)
        Complex operator + (Complex object);

};

void Complex::setData(int a, int b){
    first = a; second = b;
}

void Complex::showData(){
    std::cout << "first: " << first << " , second: " << second << std::endl;
}

Complex Complex::operator + (Complex number){
    std::cout << "Function works with operator overloading" << std::endl;
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

Complex Complex::addComplexData(Complex number){
    std::cout << "Function takes objects as arg" << std::endl;
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
    Complex c1, c2, c3, c4, c5;
    c1.setData(5, 15);
    c2.setData(4, 9);

    c1.showData();
    c2.showData();

    // Calling function to pass obj as arg
    c3 = c2.addComplexData(c1);
    c3.showData();

    // Calling function to work with operator overloading
    c4 = c1+c2;
    c4.showData();

    // Another syntax to call operator overloading
    c5 = c1.operator+(c2);
    c5.showData();

    return 0;
}
