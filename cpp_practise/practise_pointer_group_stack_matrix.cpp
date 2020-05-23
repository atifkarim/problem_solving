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
        cout<<"\nNow fill up the value of the matrix"<<endl;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                // cin>>*((int *)ptr +i*col+j);
                // cin>>*((int *)ptr +a);
                cin>>*(o+a);
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

    cout<<"How matrix do you want to make?? "<<endl;
    int box_number;
    cin>> box_number;
    int row, col;
    int main_mat [box_number];
    int * ptr;
    for (int i =0; i<box_number;i++)
    {
        cout<<"row: ";cin>>row;
        cout<<"\ncol: ";cin>>col;
        cout<<row<<" "<<col<<endl;
        pointer_class obj_1(row, col);
        obj_1.getval();

        int matrix [row][col];

        
        ptr = *matrix;

        int * p = obj_1.pointer_func(ptr);

    }

    // cin>>row;cin>>col;
    // cout<<row<<" "<<col<<endl;
    // pointer_class obj_1(row, col);
    // obj_1.getval();

    // int matrix [row][col];

    // int * ptr;
    // ptr = *matrix;


    // int * p = obj_1.pointer_func(ptr);

    cout<<"\n***************************************\n";
    int TOTAL_CELLS_1 = row*col;
    for (int i = 0; i < TOTAL_CELLS_1; i++) {
    // printf("%d ", *(ptr + i));
    cout<<*(p+i)<<" ";
  }

    return 0;
}