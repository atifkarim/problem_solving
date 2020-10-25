#include<iostream>
#include<string>
using namespace std;

double calculate_km_per_litre(int km_1, int litre_1){
    if(litre_1 == 0)
        throw 0;
    if (km_1<0 || litre_1<0)
        throw std::string{"negative value Error"};
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

    catch(int &ex){

        std::cerr<<"Tried to divide by zero: "<<&ex<<endl;
    }

    catch(std::string &ex){
        std::cerr<<ex<<endl;
    }

    cout<<"Ending of the programm"<<endl;

    return 0;

}