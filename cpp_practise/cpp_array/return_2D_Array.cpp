/*
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
  */

  #include <cstdio>
  #include<iostream>
  using namespace std;

    // Returns a pointer to a newly created 2d array the array2D has size [height x width]

    int** create2DArray(unsigned height, unsigned width)
    {
      int** array2D = 0;
      array2D = new int*[height];

      for (int h = 0; h < height; h++)
      {
            array2D[h] = new int[width];

            for (int w = 0; w < width; w++)
            {
                  // fill in some initial values
                  // (filling in zeros would be more logic, but this is just for the example)
                  array2D[h][w] = w + width * h;
            }
      }
      int *ptr{nullptr};
      ptr = *array2D;
      cout<<"mem address in fucn: "<<&array2D[0][0]<<" ,ptr mem address: "<<ptr<<endl;
      return array2D;
    }

    int main()
    {
      printf("Creating a 2D array2D\n");
      printf("\n");

      int height = 15;
      int width = 10;
      int** my2DArray = create2DArray(height, width);
      cout<<"mem address: "<<my2DArray<<endl;

      printf("Array sized [%i,%i] created.\n\n", height, width);

      // print contents of the array2D
      printf("Array contents: \n");

      for (int h = 0; h < height; h++)
      {
            for (int w = 0; w < width; w++)
            {
                  printf("%i,", my2DArray[h][w]);
            }
            printf("\n");
      }

          // important: clean up memory
          printf("\n");
          printf("Cleaning up memory...\n");
          for (int  h = 0; h < height; h++)
          {
            delete [] my2DArray[h];
          }
          delete [] my2DArray;
          my2DArray = 0;
          printf("Ready.\n");

      return 0;
    }

