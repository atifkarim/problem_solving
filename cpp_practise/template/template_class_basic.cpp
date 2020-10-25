#include <iostream>
using namespace std;

template <typename T>
class Average{
    T array[5];
    public:
        void GetElement(){

            for (int i =0;i<5;i++){
                cout<<"\nArray["<<i<<"]: ";
                cin>>array[i];
            }
        }

        T GetAverage(){
            T sum = 0;
            for (int i=0;i<5;i++){
                sum +=array[i];
            }
        T avg = (sum/5);
        return avg;
        }
};

int main(){
    Average <int> int_obj;
    int_obj.GetElement();
    cout<<"Average val is: "<<int_obj.GetAverage()<<endl;

    Average <double> double_obj;
    double_obj.GetElement();
    cout<<"Average val is: "<<double_obj.GetAverage()<<endl;



    return 0;
}