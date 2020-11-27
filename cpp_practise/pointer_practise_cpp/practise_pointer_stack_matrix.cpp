/*
A problem to create stack of matrix by using struct or class. User will give the size of main container and then each box of the container will be filled with the other matrix/array by having num from user
*/
#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Array;
typedef vector<Array> Matrix;


class container{
    public:

    int Matrix[2][2];
    float Matrix_1[2][2];

};


container getprint_array(int row, int col,container *ptr){


	cout<<"Function called whose duty is to fill up matrix by taking input from user\n";
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        
        cout<<"\nPlease give int type val: ";
        cin>>*((int *)ptr->Matrix + i * col  + j); // int type val
        cout<<"\nPlease give float type val: ";
        cin>>*((float *)ptr->Matrix_1 + i * col  + j); // flat type val
        //cout<<"done";
    }
}
    cout<<"Now from the function entered values will print\n";
  for (int h=0;h<row*col;h++){
	
    cout<<"\nint type val: "<<*((int*)ptr->Matrix+h);
    cout<<"\nfloat type val: "<<*((float*)ptr->Matrix_1+h);
}
  return *ptr;

}

int main()
{
    int matrixnumber;

    cout<<"Please enter the number of matrix you would like to create"<<endl;
    cin>>matrixnumber;
    container matrix[matrixnumber];
    container *matrixptr[matrixnumber];
    //arraypointer cpt(2,2);
    for(int x=0;x<matrixnumber;x++){
    	cout<<"\nplease fill the matrix number: "<<x<<endl;
    	matrixptr[x]=&matrix[x];
    	cout<<"pointer value which is pointed to our matrix: "<<matrixptr[x]<<endl;;
        matrix[x]=getprint_array(2,2,matrixptr[x]);
        cout<<"\nWhat is this??: "<<matrixptr[x];
    }

    cout<<"-----------------------------------------------------------"<<endl;

    cout<<"you have sucessfully entered all the matirx"<<endl;

    for(int j=0;j<2;j++){
    	for (int k=0;k<2;k++){
    		cout<<matrix[0].Matrix_1[j][k]<<" ";
    	}
    	cout<<endl;
    }

    cout<<"-----------------------------------------------------------"<<endl;

    for (int i =0;i <matrixnumber;i++){
        container *t = matrixptr[i];
        cout<<"pointer: "<<t<<endl;
        cout<<"pointer: "<<matrixptr[i]<<endl;
        cout<<"val: "<<&t<<endl;
    }

   return 0;

}
