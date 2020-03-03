#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

typedef vector<int> Array; // a declaration of a 1D vactor whose name is Array
typedef vector<Array> Matrix; // A declaration of a 2D vector whose name is Matrix

class matrix_class {// The class
  int mat_row;

  public:             // Access specifier
  matrix_class(int);
  void test_code()
  {
//    cout<<"the value after contruct: "<<mat_row<<endl;
  }
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
//        cout<<"["<<i<<"]["<<j<<"]"<<Matrix_1[i][j]<<"  ";
      }
      cout<<"\n";
    }

  return Matrix_1;
  }

};

// constructor calling for matrix_class
matrix_class::matrix_class(int x)
{
//  cout<<"contructor is called"<<endl;
  mat_row=x;
}

class vector_class
{// The class
  int vec_row;
  Array vector_1;
  public:             // Access specifier
  vector_class(int);
  Array create_vector()
  {
    cout<<"Please give the value of the Vector\n";
    int val;
//    cout<<"vec_row value:"<<vec_row<<endl;

    for (int i=0;i<vec_row;i++)
    {
     cin>>val;
     vector_1.push_back(val);
    }


//  cout<<"the size of the vector :"<<vector_1.size()<<endl;
    cout<<"Printing whole vector\n";
    for (int i=0;i<vec_row;i++)
    {
      cout<<vector_1[i]<<endl;
    }
  return vector_1;
}

//  double scalar_value(Array vector_1)
//  {int scalar_val=0;
//    for (int i=0;i<vector_1.size();i++)
//    {
//      scalar_val= scalar_val+vector_1[i]*vector_1[i];
//    }
//    cout<<" !!!!!!!!!!!!: "<<sqrt(scalar_val)<<endl;
//    return sqrt(scalar_val);
//  }
};
// constructor calling for vector_class
vector_class::vector_class(int y)
{
  vec_row=y;
}

class Result_Matrix_Multiplication_Class
{
public:
  Matrix do_matrix_multiplication(Array vector_1, Matrix Matrix_1)
  {
   Array res_col(Array(1));
   Matrix Result_Matrix(Matrix(Matrix_1.size(),res_col));

   for (int i=0;i<Matrix_1.size();i++){
       for (int j=0;j<Matrix_1[0].size();j++){
           Result_Matrix[i][0]+=( Matrix_1[i][j]*vector_1[j]);
       }
   }
  return Result_Matrix;
  }
};

class Matrix_addition_class{
//  Matrix Result_Addition_Matrix;
public:
  Matrix do_matrix_addition(Matrix Matrix_1, Matrix Matrix_2)
  {

    Array res_col(Array(Matrix_1[0].size()));

    Matrix Result_Addition_Matrix(Matrix(Matrix_1.size(),res_col));

    for (int i=0;i<Matrix_1.size();i++)
    {
      for(int j =0;j<Matrix_1[0].size();j++)
      {
        Result_Addition_Matrix[i][j]= Matrix_1[i][j]+Matrix_2[i][j];
      }
    }


//    cout<<"\nPrinting the Matrix after addition between two given Matrix\n";
//    for (int i=0;i<Matrix_1.size();i++)
//    {
//      for(int j=0;j<Matrix_1[0].size();j++)
//      {
//        cout<<Result_Addition_Matrix[i][j]<<"  ";
//      }
//    cout<<"\n";
//    }

  return Result_Addition_Matrix;
  }
};

//class vector_addition_class
//{// The class
//  int vec_row;
//  Array vector_addition;
//  public:             // Access specifier
//  vector_addition_class(int);
//  Array do_vector_addition(Array vector_1, Array vector_2)
//  {
//    int val=0;
////    cout<<"vec_row value:"<<vec_row<<endl;

//    for (int i=0;i<vec_row;i++)
//    {
//      val = vector_1[i]+vector_2[i];
//      vector_addition.push_back(val);
//    }
//  return vector_addition;


//  }
//};
//// constructor calling for vector_class
//vector_addition_class::vector_addition_class(int y)
//{
//  vec_row=y;
//}

class vector_addition_class
{// The class
  Array vector_addition;
  public:             // Access specifier
  Array do_vector_addition(Array vector_1, Array vector_2)
  {
    int val=0;
//    cout<<"vec_row value:"<<vec_row<<endl;

    for (int i=0;i<vector_1.size();i++)
    {
      val = vector_1[i]+vector_2[i];
      vector_addition.push_back(val);
    }
  return vector_addition;


  }
};


class matrix_scalar_multiplication_class
{
public:
  Matrix do_matrix_scalar_mul (int scalar_val, Matrix Matrix_1)
  {
    Array res_col(Array(Matrix_1[0].size()));
    Matrix Result_matrix_scalar_mul(Matrix(Matrix_1.size(),res_col));

    for (int i=0;i<Matrix_1.size();i++)
    {
      for(int j=0;j<Matrix_1[0].size();j++)
      {
        Result_matrix_scalar_mul[i][j]=scalar_val*Matrix_1[i][j];

      }
    }

    return Result_matrix_scalar_mul;

  }
};

class vector_scalar_multiplication_class
{// The class
  Array vector_scalar_multiplication;
  public:             // Access specifier
  Array do_vector_scalar_multiplication(int scalar_val, Array vector_1)
  {
    int val =0;
    for (int i=0;i<vector_1.size();i++)
    {
      val = scalar_val*vector_1[i];
      vector_scalar_multiplication.push_back(val);
    }
  return vector_scalar_multiplication;


  }
};


class print_matrix_class
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
};

class print_vector_class
{
public:
  void do_print_vector(Array Vector)
  {
    for (int i=0;i<Vector.size();i++)
    {
        cout<<Vector[i];
    }
    cout<<"\n";

  }
};

int main(){
  cout<<"This code will do matrix multiplication between a matrix and a vector\n";
  cout<<"First of all choose the dimension of the vector and the matrix by putting their ROW's value\n";
  int vec_row, mat_row;

  cout<<"row of vector: ";cin>>vec_row;
  cout<<"row of matrix: ";cin>>mat_row;

  print_matrix_class print_matrix_obj;
  print_vector_class print_vector_obj;
  matrix_class matrix_obj(mat_row);
  matrix_class matrix_obj_1(mat_row);
  matrix_obj.test_code();
  vector_class vector_obj(vec_row);
  vector_class vector_obj_1(vec_row);
  Array vector_1=vector_obj.create_vector();
  Array vector_2=vector_obj_1.create_vector();
  Matrix Matrix_1 = matrix_obj.create_matrix(vector_1);
  Matrix Matrix_2 = matrix_obj_1.create_matrix(vector_1);

//  double get_my_val = vector_obj.scalar_value(vector_1);
//  cout<<"\nfrom class getting value: "<<get_my_val<<endl;

//  Array res_col(Array(1));
// Matrix Result_Matrix(Matrix(Matrix_1.size(),res_col));

// for (int i=0;i<Matrix_1.size();i++){
//     for (int j=0;j<Matrix_1[0].size();j++){
//         Result_Matrix[i][0]+=( Matrix_1[i][j]*vector_1[j]);
//     }
// }
  Result_Matrix_Multiplication_Class result_obj;
  Matrix Result_Matrix = result_obj.do_matrix_multiplication(vector_1, Matrix_1);

  cout<<"-------------------Resultant Matrix by doing Matrix Multiplication between Matrix and Vector"
        "-------------------\n";
  print_matrix_obj.do_print_matrix(Result_Matrix);

   cout<<"\n";

  Matrix_addition_class matrix_addition_obj;
  cout<<"\n-------------------Calling Matrices for Addition-------------------\n";
  Matrix Addition_Matrixes = matrix_addition_obj.do_matrix_addition(Matrix_1, Matrix_2);
  cout<<"\nDo addition of 2 Matrices\n";
  print_matrix_obj.do_print_matrix(Addition_Matrixes);



//  vector_addition_class vector_addition_obj(vec_row);
  vector_addition_class vector_addition_obj;
  cout<<"\n-------------------Calling Vectors for Addition-------------------\n";
  Array Addition_Vector = vector_addition_obj.do_vector_addition(vector_1, vector_2);
  cout<<"\Do vector Addition\n";
  print_vector_obj.do_print_vector(Addition_Vector);



  cout<<"\nCalling scalar multiplication with the Matrix\n";
  int scalar_val;
  cout<<"give the scalar val which you want to use the multiplication with matrix: ";cin>>scalar_val;
  matrix_scalar_multiplication_class matrix_scalar_multiplication_obj;
  cout<<"\n-------------------Calling Matrix to do Scalar Multiplication-------------------\n";
  Matrix Scalar_mul_matrix = matrix_scalar_multiplication_obj.do_matrix_scalar_mul(scalar_val,Matrix_1);
  cout<<"\nDo scalar multiplication with the Matrix\n";
  print_matrix_obj.do_print_matrix(Scalar_mul_matrix);

  cout<<"\nCalling scalar multiplication with the Vector\n";
  vector_scalar_multiplication_class vector_scalar_multiplication_obj;
  Array Scalar_mul_vector = vector_scalar_multiplication_obj.do_vector_scalar_multiplication(scalar_val, vector_1);
  cout<<"\nDo scalar multiplication with the Vector\n";
  print_vector_obj.do_print_vector(Scalar_mul_vector);


  return 0;
}
