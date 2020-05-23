#include<iostream>
using namespace std;

int sum_by_ref(int &sum_ref){

int a {2};

sum_ref = sum_ref+a;

return sum_ref;

}

int sum_by_call(int sum_call){

    int b {2};

    sum_call = sum_call+b;

    return sum_call;
}

int main(){

    int sum = 10+20;

    cout<<"before calling func SUM is: "<<sum<<endl;
    
    cout<<"\n\nCalling function by CALL"<<endl;
    int m = sum_by_call(sum);
    cout<<"Return Value after calling function is: "<<m<<endl;
    cout<<"SUM Value after calling function by CALL is: "<<sum<<endl;
    


    cout<<"\n\nCalling function by REFERENCE"<<endl;
    int n = sum_by_ref(sum);
    cout<<"Return Value after calling function is: "<<n<<endl;
    cout<<"SUM Value after calling function by REFERENCE is: "<<sum<<endl;




    return 0;
}