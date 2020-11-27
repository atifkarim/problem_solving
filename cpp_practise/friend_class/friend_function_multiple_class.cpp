/*
https://www.youtube.com/watch?v=uwKCu2eSL2M&list=PLrKBFf87Cy9BVBAZ1Y-6Olzz0KTU4Qw6L&index=38
*/

#include <iostream>
using namespace std;
class employee;
class boss{

    int boss_salary;
    public:
        boss(int);

        void display_boss(){
            cout<<"boss salary is: "<<boss_salary<<endl;
        }

        friend void total_salary(boss, employee);
};

boss::boss(int a){
    boss_salary = a;
}

class employee{

    int employee_salary;
    public:
        employee(int);

        void display_employee(){
            cout<<"employee salary is: "<<employee_salary<<endl;
        }

        friend void total_salary(boss, employee);
};

employee::employee(int a){
    employee_salary = a;
}

void total_salary(boss b, employee e){
    int sum_salary;
    sum_salary = b.boss_salary + e.employee_salary;
    cout<<"friend class has added the salary of boss and employee: "<<sum_salary<<endl;
}

int main(){ 

    boss obj_boss(50);
    employee obj_employee(30);
    obj_boss.display_boss();
    obj_employee.display_employee();
    total_salary(obj_boss, obj_employee);


    return 0;
}