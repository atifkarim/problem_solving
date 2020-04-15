/*
A problem to create stack of matrix by using struct or class. User will give the size of main container and then each box of the container will be filled with the other matrix/array
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


	// cout<<"Hello world";
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>*((int *)ptr->Matrix + i * col  + j);
        cin>>*((float *)ptr->Matrix_1 + i * col  + j);
        //cout<<"done";
    }
}

  for (int h=0;h<row*col;h++){
	cout<<*((int*)ptr->Matrix+h);
    cout<<*((float*)ptr->Matrix_1+h);
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
    	cout<<"please fill the matrix"<<x<<endl;
    	matrixptr[x]=&matrix[x];
    	cout<<matrixptr[x];
        matrix[x]=getprint_array(2,2,matrixptr[x]);
        cout<<matrixptr[x];
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
