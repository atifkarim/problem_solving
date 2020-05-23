/*

#include <cstdlib>
#include <math.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a[3][3]={{ 2,4,3},{1,5,7},{0,2,3}};
    int b[]={2,5,6};
    int c[3];

    for (int i=0;i<3;i++){
         c[i]=0;
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            c[i]+=( a[i][j]*b[j]);
        }
    }

    for (int i=0;i<3;i++){
        cout<<c[i]<<"  "<<endl;
    }

//    system("PAUSE");
//    return EXIT_SUCCESS;
}

*/
/*
#include <iostream>

using namespace std;

int create_vector(int mat_col)
{
  int vec_row, vec_col;
  int my_vec[vec_row][vec_col];
  if (mat_col!=1){
    cout<<"It will be a column vector"<<endl;
    vec_row = mat_col;
    vec_col = 1;
    // column vector, single column
  }
  else if (mat_col==1){
    cout<<"It will be a row vector"<<endl;
    vec_row=mat_col;
    cout<<"put desired column for the vector as it is a row vector: ";
    cin>>vec_col;
  }
  else{
    cout<<"problem arises in declaring Matrix"<<endl;
  }



  cout<<"Printing vector:  \n"<<endl;

  for (int i=0;i<vec_row;i++)
  {
      for (int j=0;j<vec_col;j++)
      {
          cout << "A[" << i+1 << "][" << j+1 << "]=";
          cin >> my_vec[i][j];
      }
  }
  cout << "[[ ";
  for (int i=0;i<vec_row;i++)
  {
      for (int j=0;j<vec_col;j++)
      {
          cout << my_vec[i][j] << " ";
      }
      if (i!=vec_row-1) //Just to make the output pretty
          cout << "]\n [ ";
      else
          cout << "]]";
  }
return 1;
//return my_vec;

}*/


/*
#include<iostream>
using namespace std;
std::vector<int> f() {
    std::vector<int> my_vec;

    int vec_row, vec_col;
//    int my_vec[vec_row][vec_col];
    if (mat_col!=1){
      cout<<"It will be a column vector"<<endl;
      vec_row = mat_col;
      vec_col = 1;
      // column vector, single column
    }
    else if (mat_col==1){
      cout<<"It will be a row vector"<<endl;
      vec_row=mat_col;
      cout<<"put desired column for the vector as it is a row vector: ";
      cin>>vec_col;
    }
    else{
      cout<<"problem arises in declaring Matrix"<<endl;
    }



    cout<<"Printing vector:  \n"<<endl;

    for (int i=0;i<vec_row;i++)
    {
        for (int j=0;j<vec_col;j++)
        {
            cout << "A[" << i+1 << "][" << j+1 << "]=";
            cin >> my_vec[i][j];
        }
    }
    cout << "[[ ";
    for (int i=0;i<vec_row;i++)
    {
        for (int j=0;j<vec_col;j++)
        {
            cout << my_vec[i][j] << " ";
        }
        if (i!=vec_row-1) //Just to make the output pretty
            cout << "]\n [ ";
        else
            cout << "]]";
    }

//    ... populate the vector ...
    return my_vec;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout << "A is an nxn matrix.\nn or row=";
    cin >> n; //row
    cout << "A is an nxn matrix.\nm or column=";
    cin>>m; //column
    int matrix[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << "A[" << i+1 << "][" << j+1 << "]=";
            cin >> matrix[i][j];
        }
    }
    cout << "[[ ";
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << matrix[i][j] << " ";
        }
        if (i!=n-1) //Just to make the output pretty
            cout << "]\n [ ";
        else
            cout << "]]";
    }

    cout<<"\n";
    int b[]={2,5,6};
    int h,k;
    int c[h][k];

    for (int h=0;h<n;h++){
      for (int k=0;k<n;k++){
         c[h][k]=0;
      }
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            c[i][j]+=( matrix[i][j]*b[j]);
        }
    }

    cout << "[[ ";
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << c[i][j] << " ";
        }
        if (i!=n-1) //Just to make the output pretty
            cout << "]\n [ ";
        else
            cout << "]]";
    }

//    create_vector(m);
//    std::vector<int> myvec_1 = f();
}
*/
/*
#include <iostream>
#include <sstream>
#include <vector>

int main() {

    std::string line;
    int number;
    std::vector<int> numbers;

    std::cout << "Enter numbers separated by spaces: ";
    std::getline(std::cin, line);
    std::istringstream stream(line);
    while (stream >> number)
        numbers.push_back(number);

//    write_vector(numbers);

}*/

#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Array; // a declaration of a 1D vactor whose name is Array
typedef vector<Array> Matrix; // A declaration of a 2D vector whose name is Matrix



int main(){
  int vec_row;
  cout<<"give row of vector: ";
  cin>>vec_row;
  Array vector_1(Array(3)); // A 1D vector named vector_1 is assigned with column size 3
  Array res_col(Array(1));
//  cout<<"vector_1 row or SIZE: "<<vector_1.size()<<endl;
//  cout<<"vector_1 column is : "<<vector_1[1].size()<<endl;
  int mat_row;
  cout<<" give row of matrix: ";
  cin>>mat_row;
  Matrix Matrix_1(Matrix(mat_row,vector_1)); // A 2D vector named Matrix_1 is assigned with column size as same as vector_1
                                        // and it's row is used as user input
//  cout <<"Matrix_1 row or SIZE is: "<<Matrix_1.size()<<endl; // row number
//  cout<<"Matrix_1 column is: "<<Matrix_1[1].size()<<endl;//column number
//  int val_mat;
  for (int i=0;i<3;i++){
    for (int j=0;j<vector_1.size();j++){
      cin>>Matrix_1[i][j];
//      cin>>val_mat;
//      Matrix_1[i][j].push_back(val_mat);
    }

  }
cout<<"\n 2D vector printing\n";
 for (int i=0;i<3;i++){
    for(int j=0;j<vector_1.size();j++){
      cout<<Matrix_1[i][j]<<" ";

    }
    cout<<"\n";
  }

 cout <<"\n NOW 1D VECTOR\n";

 for (int i=0;i<vector_1.size();i++){
  cin>>vector_1[i];
 }
cout<<"\n 1D vector printing\n";
 for (int i=0;i<vector_1.size();i++){
  cout<<vector_1[i];
 }
 Matrix Result_Matrix(Matrix(Matrix_1.size(),res_col));
// Matrix Result_Matrix(Matrix(3,1));

// for (int h=0;h<Result_Matrix.size();h++){
//   for (int k=0;Result_Matrix[0].size()<1;k++){
//     cout<<"I am here"<<endl;
//      Result_Matrix[h][k]=0;
//   }
// }
 int val_here=0;
 for (int i=0;i<Matrix_1.size();i++){
     for (int j=0;j<Matrix_1[0].size();j++){
         Result_Matrix[i][0]+=( Matrix_1[i][j]*vector_1[j]);
//         val_here++;
     }
// val_here=0;
 }
cout<<"Resultant Matrix\n";
 for (int i =0;i<Result_Matrix.size();i++){
   for(int j =0;j <Result_Matrix[0].size();j++){
     cout<<Result_Matrix[i][j]<<endl;

   }
 }



  return 0;
}
