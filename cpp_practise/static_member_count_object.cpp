/*
How many times a object is called by a class will be counted in this code
*/

#include<iostream>
using namespace std;


class count_obj{
    static int todo_obj;

    public:
        count_obj(){todo_obj++;} //constructor
        ~count_obj(){todo_obj--;} // destructor

        static void print_obj(){ // importamnt as function is used static type
            cout <<"total obj is: "<<todo_obj<<endl;
        }
};

int count_obj :: todo_obj;

int main(){

    count_obj s1,s2,s3,s4,s5;

    count_obj::print_obj(); // class is called static function by using scope operator


    return 0;
}
