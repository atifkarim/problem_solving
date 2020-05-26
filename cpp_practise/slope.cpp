#include<iostream>
using namespace std;

int main(){

    float max_neg_diff = -0.5;

    float my_array[10] = {1,1.2,1.5,1.4,1,.5,1.8,2.8,.5,.08};
    int size_array = sizeof(my_array)/sizeof(*my_array);
    cout<<(sizeof(my_array)/sizeof(*my_array))<<endl;

    for (int x =0; x<size_array-1;++x){
        float diff = my_array[x+1]-my_array[x];
        if(diff<= max_neg_diff){
            cout<<diff<<" : decreasing"<<endl;
        }

        else{
            cout<<diff<<" : increasing"<<endl;
        }

    }

 return 0;
}