#include<iostream>
#include<vector>

using namespace std;

typedef vector<int> Array; // a declaration of a 1D vactor whose name is col_vector
typedef vector<Array> Matrix; // A declaration of a 2D vector whose name is Array

class ArrayInfo{
  public:
    Matrix create_matrix(Array vector_1, int mat_row)
  {
    cout<<"Please give the value for the Matrix\n";
    Matrix Matrix_1(Matrix(mat_row,vector_1)); // A 2D vector named Matrix_1 is assigned with column size as same as vector_1
    // and it's row is used as user input
    for (int i=0;i<Matrix_1.size();i++)
    {
      for (int j=0;j<vector_1.size();j++)
      {
        cin>>Matrix_1[i][j];
      }
      cout<<"\n";
    }

    cout<<"Printing whole Matrix\n";
    for (int i=0;i<Matrix_1.size();i++)
    {
      for(int j=0;j<vector_1.size();j++)
      {
        cout<<Matrix_1[i][j]<<"  ";
      }
      cout<<"\n";
    }

    return Matrix_1;
  }


};


  int main(){

      int mat_row;
      int mat_col;
      cin>>mat_row;
      cin>>mat_col;
      Array vec_1;
    //   vec_1.reserve(mat_col);
    for (int i=0;i<mat_col;i++)
    {
      vec_1.push_back(0);
    }
      cout<<vec_1.size()<<endl;
      ArrayInfo obj_array;

      Matrix Matrix_new = obj_array.create_matrix(vec_1, mat_row);

      cout<<"from main function"<<endl;

      for(int a=0;a<mat_row;a++){
          for(int b=0;b<mat_col;b++){
              cout<<Matrix_new[a][b]<<" ";
          }
          cout<<endl;
      }


      return 0;
  }

