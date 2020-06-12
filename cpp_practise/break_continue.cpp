#include<iostream>
using namespace std;

int main(){

    for(int i =0;i<2;i++){
        for(int j =0; j<3;j++){
            if(j==2){
                continue;
                // Here 1 thing is impotant that cointinue will execute if the "if condition" is true
                // and then 2nd for loop will not occur, it will goes to the first for loop
            }
            cout<<"i: "<<i<<" and j: "<<j<<endl;
        }
/*        if(i==1){
            break;
        }
        cout<<"break??\n";*/
    cout<<"\nAfter turn i val is: "<<i<<endl<<endl;
    }

    return 0;
}