/*
Notation for pointer and array learned from the niton bangla book
rule is: 
x[row][col] = *(x[row]+col)
if array is ->> int x[2][3]
val of x[1][2] == 3 then pointer will show *(x[1]+2)
*/

#include<iostream>
using namespace std;

int main(){

    int x [2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<"x["<<i<<"]["<<j<<"] : ";cin>>x[i][j];
        }
    }

    int *array_pointer{*x};
    cout<<"address of pointer is: "<<array_pointer<<" and array's first address is: "<<&x[0][0]<<endl;
    cout<<"pointer lives at address: "<<&array_pointer<<endl;

    cout<<"\nNow printing value of the array using pointer notation\n";
    int u =0;
    for(int i=0;i<2;i++){
        for(int j =0;j<3;j++){
            cout<<"val is: "<<*(array_pointer+u)<<" ";
            u++;
        }
        cout<<"\n";
    }

    cout<<"\nPrinting the array with pointer by using 1 for loop\n";
    int e{0};
    for(int i=0;i<6;i++){
        cout<<*(array_pointer+e)<<" ";
        if(e==2){
            cout<<"\n";
        }
        e++;
    }

    

    return 0;
}