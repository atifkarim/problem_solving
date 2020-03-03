#include<iostream>
#include<vector>
using namespace std;

typedef vector<int> Array; // a declaration of a 1D vactor whose name is Array
typedef vector<Array> Matrix; // A declaration of a 2D vector whose name is Matrix

class matrix_class {// The class
  int mat_row;

public:             // Access specifier
  matrix_class(int);
  Matrix create_matrix(Array vector_1)
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

// constructor calling for matrix_class
matrix_class::matrix_class(int x)
{
  mat_row=x;
}

class vector_class
{// The class
  int vec_row;
  Array vector_1;
public:             // Access specifier
  vector_class(int);
  Array create_vector() // creation of a 1D column vector usig row number.
  {
    cout<<"Please give the value of the Vector\n";
    int val;
    //    cout<<"vec_row value:"<<vec_row<<endl;

    for (int i=0;i<vec_row;i++)
    {
      cin>>val;
      vector_1.push_back(val);
    }

    cout<<"Printing whole vector\n";
    for (int i=0;i<vec_row;i++)
    {
      cout<<vector_1[i]<<endl;
    }
    return vector_1;
  }

};
// constructor calling for vector_class
vector_class::vector_class(int y)
{
  vec_row=y;
}

class do_calculation // class to do all types of calculation
{
public:
  Matrix do_matrix_multiplication(Array vector_1, Matrix Matrix_1)
  {
    Array res_col(Array(1)); // declaration of column number for new matrix which stores the return value
    Matrix Result_Matrix(Matrix(Matrix_1.size(),res_col)); // declaration of new matrix

    for (int i=0;i<Matrix_1.size();i++){
      for (int j=0;j<Matrix_1[0].size();j++){
        Result_Matrix[i][0]+=( Matrix_1[i][j]*vector_1[j]);
      }
    }
    return Result_Matrix;
  }

  Matrix do_matrix_addition(Matrix Matrix_1, Matrix Matrix_2)
  {

    Array res_col(Array(Matrix_1[0].size())); // declaration of column number for new matrix which stores the return value
    Matrix Result_Addition_Matrix(Matrix(Matrix_1.size(),res_col)); // declaration of new matrix

    for (int i=0;i<Matrix_1.size();i++)
    {
      for(int j =0;j<Matrix_1[0].size();j++)
      {
        Result_Addition_Matrix[i][j]= Matrix_1[i][j]+Matrix_2[i][j];
      }
    }

    return Result_Addition_Matrix;
  }

  Array do_vector_addition(Array vector_1, Array vector_2)
  { Array vector_addition; // Initialization of return vector
    int val=0;
    //    cout<<"vec_row value:"<<vec_row<<endl;

    for (int i=0;i<vector_1.size();i++)
    {
      val = vector_1[i]+vector_2[i];
      vector_addition.push_back(val);
    }
    return vector_addition;
  }

  Matrix do_matrix_scalar_multiplication (int scalar_val, Matrix Matrix_1)
  {
    Array res_col(Array(Matrix_1[0].size())); // declaration of column number for new matrix which stores the return value
    Matrix Result_matrix_scalar_mul(Matrix(Matrix_1.size(),res_col)); // declaration of new matrix

    for (int i=0;i<Matrix_1.size();i++)
    {
      for(int j=0;j<Matrix_1[0].size();j++)
      {
        Result_matrix_scalar_mul[i][j]=scalar_val*Matrix_1[i][j];

      }
    }

    return Result_matrix_scalar_mul;

  }

  Array do_vector_scalar_multiplication(int scalar_val, Array vector_1)
  { Array vector_scalar_multiplication; // Initialization of return vector
    int val =0;
    for (int i=0;i<vector_1.size();i++)
    {
      val = scalar_val*vector_1[i];
      vector_scalar_multiplication.push_back(val);
    }
    return vector_scalar_multiplication;
  }
};

class do_print // print all resluts whose type could be matrix or vector
{
public:
  void do_print_matrix(Matrix Matrix)
  {
    for (int i=0;i<Matrix.size();i++)
    {
      for(int j=0;j<Matrix[0].size();j++)
      {
        cout<<Matrix[i][j]<<" ";
      }
      cout<<"\n";
    }
  }

  void do_print_vector(Array Vector)
  {
    for (int i=0;i<Vector.size();i++)
    {
      cout<<Vector[i]<<endl;
    }
  }
};

int main(){

  cout<<"This code will do matrix multiplication between a matrix and a vector\n";
  cout<<"First of all choose the dimension of the vector and the matrix by putting their ROW's value\n";
  int vec_row, mat_row;

  cout<<"row of vector: ";cin>>vec_row; // setting the row number for vector
  cout<<"row of matrix: ";cin>>mat_row; // setting the row number for matrix. matrix's column will be same as
  // the row number of the vector otherwise mathematically matrix
  // multiplication  is not possible

  matrix_class matrix_obj(mat_row);     // calling constructor of matrix class using object and passing row value to create 1st matrix
  matrix_class matrix_obj_1(mat_row);   // calling constructor of matrix class using object and passing row value to create 2nd matrix

  vector_class vector_obj(vec_row);     // calling constructor of vector class using object and passing row value to create 1st vector
  vector_class vector_obj_1(vec_row);   // calling constructor of vector class using object and passing row value to create 2nd vector

  Array vector_1=vector_obj.create_vector(); // Accessing function from vector_class
  Array vector_2=vector_obj_1.create_vector(); // Accessing function from vector_class

  Matrix Matrix_1 = matrix_obj.create_matrix(vector_1); // Accessing function from matrix_class
  Matrix Matrix_2 = matrix_obj_1.create_matrix(vector_1); // Accessing function from matrix_class

  do_print print_obj; // Initializing object for do_print class

  do_calculation result_obj; // Initializing object for do_calculation class
  Matrix Result_Matrix = result_obj.do_matrix_multiplication(vector_1, Matrix_1); // Passing 1st vector and matrix
  // for doing matrix multiplication

  cout<<"-------------------Resultant Matrix by doing Matrix Multiplication between Matrix and Vector"
        "-------------------\n";
  print_obj.do_print_matrix(Result_Matrix); // print the result of matrix multiplication


  cout<<"\n-------------------Calling Matrices for Addition-------------------\n";
  Matrix Addition_Matrixes = result_obj.do_matrix_addition(Matrix_1, Matrix_2); // passing both matrices
  // to perform matrix addition
  cout<<"\nDo addition of 2 Matrices\n";
  print_obj.do_print_matrix(Addition_Matrixes); // print the result of matrix addition


  cout<<"\n-------------------Calling Vectors for Addition-------------------\n";
  Array Addition_Vector = result_obj.do_vector_addition(vector_1, vector_2); // passing both vectors to perform
  // vector addition
  cout<<"\nDo vector Addition\n";
  print_obj.do_print_vector(Addition_Vector); // print the result of vector addition



  cout<<"\nCalling scalar multiplication with the Matrix\n";

  int scalar_val; // A variable declared to use for scalar multiplication with matrix and vectors
  cout<<"give the scalar val which you want to use the multiplication with matrix: ";cin>>scalar_val;

  cout<<"\n-------------------Calling Matrix to do Scalar Multiplication-------------------\n";
  Matrix Scalar_mul_matrix = result_obj.do_matrix_scalar_multiplication(scalar_val,Matrix_1); // passing scalar value
  // and matrix to do scalar multiplication
  cout<<"\nDo scalar multiplication with the Matrix\n";
  print_obj.do_print_matrix(Scalar_mul_matrix); // print the result of scalar multiplication with matrix

  cout<<"\nCalling scalar multiplication with the Vector\n";
  Array Scalar_mul_vector = result_obj.do_vector_scalar_multiplication(scalar_val, vector_1); // passing scalar value
  // and vector to do scalar multiplication
  cout<<"\nDo scalar multiplication with the Vector\n";
  print_obj.do_print_vector(Scalar_mul_vector); // print the result of scalar multiplication with vector


  return 0;
}
