/*
#include<iostream>
#include<vector>
using namespace std;

typedef vector<int> Array; // a declaration of a 1D vactor whose name is Array
typedef vector<Array> Matrix; // a declaration of a 1D vactor whose name is Matrix

int main(){
    int row, column;
    cin >> row; cin>> column;
    int matrix [row][column];

    int * my_pointer;

    my_pointer = *matrix;
    cout<<&matrix[0][0]<<endl;
    cout<<my_pointer<<endl;
    

    for (int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>*my_pointer;
            my_pointer++;
        }
    }

    cout<<"N: "<<my_pointer<<endl;

   for (int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<matrix[i][j]<<" ";
        }
    cout<<"\n";
    }

    cout<<"----------------------------------"<<endl;

    
    


    return 0;
}
*/



#include <iostream>
using namespace std;

int * pointer_func(int * o, int row, int col){
int a = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            // cin>>*((int *)ptr +i*col+j);
            // cin>>*((int *)ptr +a);
            cin>>*(o +a);
            a++;

            // cout<<"done";
        }
    }

        return o;
    }

int main()
{
    int a=0;
    int row=2;
    int col=2;
    int *ptr{nullptr};
    
    
    int matrix[row][col];
    ptr=*matrix;

    cout<<"ptr: "<<ptr<<endl;
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            // cin>>*((int *)ptr +i*col+j);
            // cin>>*((int *)ptr +a);
            cin>>*(ptr +a);
            cout<<"Now: "<<matrix[i][j]<<endl;
            a++;

            // cout<<"done";
        }
    }

    cout<<"Now: ptr: "<<ptr<<endl;
    
    cout<<endl;
    for (int i =0;i<row;i++){
        for(int j =0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";}


    cout<<"-----------------------"<<endl;
int b {0};
    for (int s =0;s<row;s++){
        for(int t=0;t<col;t++){
            cout<<*(ptr+b)<<" ";
            b++;
        }
   cout<<endl;
    }

    cout<<"#########################################"<<endl;

    for(int h=0;h<row*col;h++){
     cout<<*((int*)ptr+h);

}
cout<<"#########################################"<<endl;

    int TOTAL_CELLS = row*col;
    for (int i = 0; i < TOTAL_CELLS; i++) {
    // printf("%d ", *(ptr + i));
    cout<<*(ptr+i)<<" ";
  }

  cout <<"~~~~~~~~~~~~~~~~~~~~ calling function ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

  int  * z = pointer_func(ptr, row, col);
   
   int TOTAL_CELLS_1 = row*col;
    for (int i = 0; i < TOTAL_CELLS_1; i++) {
    // printf("%d ", *(ptr + i));
    cout<<*(z+i)<<" ";
  }

  int  test[2][3] = { {2, 4, 5}, {9, 0 ,0}};
  int * testPtr;
  testPtr = &test[0][0];

  cout<<"\n\ntest Array and Pointer is Pinting\n";
  cout<<"Test Array: "<<&test[0][0]<<" ,and testPtr: "<<&testPtr<<" ,and val: "<<*testPtr<<endl;

    int s_1=0;
  for(int t=0;t<2;t++){
      for(int s=0;s<3;s++){
          cout<<*(testPtr+s_1)<<" ";
          s_1++;
      }
      cout<<endl;
  }


   
   return 0;
}