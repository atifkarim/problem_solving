#include<iostream>
#include<string>
using namespace std;

class DivideByZeroException{};

class NegativeValueException{};

double calculate_km_per_litre(int km_1, int litre_1){
    if(litre_1 == 0)
        throw DivideByZeroException();
    if (km_1<0 || litre_1<0)
        throw NegativeValueException();
    return static_cast<double>(km_1)/litre_1;
}

int main(){
    int km, litre;
    cout<<"How many km you have travelled? : "; cin>> km;
    cout<<"How much oil do you need in Litre? : ";cin>>litre;

    cout<<"result km/litre is: "<< static_cast<double>(km)/litre<<endl; // Here if we omit static_cast<double>
                                                                        // Then it will make error

    // But the thing is we can also run the code flawlessly by using try and catch
    
    cout<<"Function calling"<<endl;
    try{
    double km_per_litre = calculate_km_per_litre(km, litre);
    cout<<"resut from the function is: "<<km_per_litre<<endl;
    }

    catch(const DivideByZeroException &ex){

        cout<<"Trying to divide by Zero\n";
    }

    catch(const NegativeValueException &ex){
        cout<<"Sorry you have one negative value\n";
    }

    cout<<"Ending of the programm"<<endl;

    return 0;

}