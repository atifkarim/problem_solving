#include<iostream>
#include<vector>
#include<typeinfo>
using namespace std;

/*int my_array[] = {10,-20,30,-40,50};
int sum_of_element_of_array = 0;
int length_of_array = sizeof(my_array)/sizeof(my_array[0]);

int do_sum(int a, int b){

  int result_sum = a+b;

  return result_sum;
}

int do_sub(int a,int b)
{

  int result_sub = a-b;
  return result_sub;
}

int main(){

  std::vector< int > arr;

  int num_1 = 12;
  int num_2 = 20;

  int sum_res;
  sum_res = do_sum(num_1, num_2);
  cout <<"sum_res: "<<sum_res<<endl;

  int sub_res;
  sub_res = do_sub(num_1, num_2);
  cout <<"sub_res: "<<sub_res<<endl;
cout<<"here type is: "<<typeid(my_array).name()<<endl;
//  cout << "here size: "<<my_array.size()<<endl;


  cout<<"hey bro!!!"<<endl;
  for (int i=0;i<5;i++){
    cout<<"val of i: "<<i<<endl;
    cout<<"val of array: "<<my_array[i]<<endl;

    int result = i+my_array[i];

    int abs_result = abs(result);

    arr.push_back(abs_result);
    cout<<"new values are: "<<result<<endl;

    cout <<"size: "<<sizeof(my_array)<<endl;
    cout <<"size: "<<sizeof(my_array[0])<<endl;

    cout<<"len of array: "<<length_of_array<<endl;
  }



  for (int y=0;y<length_of_array;y++){

    cout<<"i am here"<<endl;
    cout<<"--------: "<<arr[y]<<endl;

  }



  return 0;
}*/

std::vector<std::vector<int>> two_dim_array;
int number_a = 10;
int main()
{
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<"hhh"<<endl;
      two_dim_array[i].push_back(j);
//          number_a++;
      //cout<<number_a;
    }
  }
  cout<<"new array"<<endl;
  for (int i=0;i<2;i++){
    for(int j=0;j<3;j++){
      cout<<two_dim_array[i][j]<<endl;
    }
  }
  return 0;

}
