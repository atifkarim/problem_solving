#include<iostream>
using namespace std;

class pointer_class{
    private:
        int row;
        int col;
    public:
        pointer_class(int,int);
        void getval(){
            cout<<"row: "<<row<<" col: "<<col<<endl; 
        }

        int * pointer_func(int * o){
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

};

pointer_class::pointer_class(int row_1, int col_1){
    row = row_1;col = col_1;
            cout<<"constructor is called"<<endl;
}


int main(){


    int row, col;
    cin>>row;cin>>col;
    cout<<row<<" "<<col<<endl;
    pointer_class obj_1(row, col);
    obj_1.getval();

    int matrix [row][col];

    int * ptr;
    ptr = *matrix;

    int * p = obj_1.pointer_func(ptr);
cout<<"***************************************";
    int TOTAL_CELLS_1 = row*col;
    for (int i = 0; i < TOTAL_CELLS_1; i++) {
    // printf("%d ", *(ptr + i));
    cout<<*(p+i)<<" ";
  }

    return 0;
}


/*


#include <iostream>
using namespace std;


class arraypointer{
    int row,col;
    public:
    arraypointer(int a,int b){
        row=a;
        col=b;
    };
    void getprint_array(int *ptr){

        for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            //cin>>(*(*(ptr+i)+j);
            //cin>>*(ptr + ( i * col) + j));
            cin>>*((int *)ptr + i * col  + j);
            cout<<"done";
        }
    }

//      for (int h=0;h<row*col;h++){
//        cout<<*((int*)ptr+h);
//    }
//


}

};




int main()
{

    int row=3;
    int col=3;
    int *ptr;


    int matrix[row][col];
    ptr=*matrix;

    arraypointer cptr(row,col);
    cptr.getprint_array(ptr);
    //getprint_array(row,col,ptr);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }




   return 0;
}
*/