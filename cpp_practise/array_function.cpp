/***
 * Need of static array inside of the function, take a look
 * https://stackoverflow.com/questions/45736922/why-is-it-needed-to-declare-an-array-as-static-when-returning-it-from-a-function
 * ***/

#include<iostream>
#include<array>

using namespace std;

int* my_array(int array [], size_t size)
{

// int* here_array = new int[size];
static int here_array[5]; 
cout<<"here_val from function: "<<endl;
for (int i=0;i<size;i++)
{
here_array[i]=array[i]+5;
cout<<here_array[i]<<" ";
}

// cout<<"here array size: "<<sizeof(here_array[0])<<endl;
// cout<<"here array size: "<<here_array.size()<<endl;

cout<<"\nNew Topic\n";
for(int i=0; i<5;i++){
    cout<<array[i]<<" ";
}

return here_array;


}


int main(){

    int array[5]={10,20,30,40,50};

    int* new_array = my_array(array, 5);
    cout<<"\nSize of the returned pointer: "<<sizeof(new_array)/sizeof(new_array[0])<<endl;

    cout<<"The following line will print the value of returned variable which is actually a pointer"<<endl;
    cout<<"Return val from the function is: "<<new_array<<"\nAddress is: "<<&new_array<<"\nValue is: "<<*new_array<<endl;
    // cout<<"here array size: "<<new_array.size()<<endl;
    cout<<endl<<endl;
    cout<<"inside from  main func array is: "<<endl;

    for(int j=0;j<5;j++){
        cout<<new_array[j]<<" ";
    }
    cout<<endl;
    return 0;
}