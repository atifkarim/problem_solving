#include<iostream>
#include<vector>
using namespace std;

int given_array[] = {-1,5,2,-3,1};
int length_array = sizeof(given_array)/sizeof(given_array[0]);
std::vector< int > absolute_array;
//int absolute_array[length_array]={};
//int absolute_array[length_array];
int desire_point = 12;
std::vector< int > diff_array;
std::vector< int > abs_diff_array;
std::vector< int > intermediate_result;

std::vector< std::vector<int> > two_dim_array;

int main(){
//  cout<<"length of abs array: "<<sizeof(absolute_array)/sizeof(absolute_array[0])<<endl;
  cout<<"--------"<<endl;
  cout<<"length of given array: "<<sizeof(given_array)/sizeof(given_array[0])<<endl;
  cout<<"length: "<<length_array<<endl;

  for (int i =0; i <length_array;i++){
//    cout<<"given_array: "<<endl;
//    cout<<given_array[i]<<endl;
    int j = abs(given_array[i]);
    cout<<" j val: "<<j<<endl;
    absolute_array.push_back(j);
    cout<<"push done"<<endl;
    cout<<"size abs array"<<absolute_array.size()<<endl;
//    cout<<'changed value: '<<absolute_array[i]<<endl;
  }
  cout<<"length of abs array: "<<sizeof(absolute_array)/sizeof(absolute_array[0])<<endl;


  for (int h =0;h<5;h++){
//    cout<<absolute_array[h]<<endl;
  }
cout<<"---------------------------------------"<<endl;
  for (int i =0;i<absolute_array.size();i++){
    int difference = desire_point - absolute_array[i];
    diff_array.push_back(difference);
    int abs_difference = abs(difference);
    abs_diff_array.push_back(abs_difference);

  }

  for (int i=0;i<length_array;i++){
    cout <<"diff array val: "<<diff_array[i]<<"  "<<abs_diff_array[i]<<endl;
  }

  int smallest = abs_diff_array[0] ;
      for ( int i=1;  i < abs_diff_array.size();  ++i ){
          if ( abs_diff_array[i] < smallest ){
               smallest = abs_diff_array[i] ;

      cout <<"smallest value: "<< smallest << '\n' ;
          }}

      for (int i =0;i<length_array;i++){

        int res = abs(smallest)-abs(abs_diff_array[i]);
        cout<<"res before IF: "<<res<<endl;
        if (res==0){
          cout<<"res after IF: "<<res<<endl;
          intermediate_result.push_back(given_array[i]);
        }

      }
      cout<<"*********"<<intermediate_result.size()<<endl;
      cout<<"---------------------------------"<<endl;
//cout<<sizeof(abs_diff_array)/sizeof(abs_diff_array[0])<<endl;
      for (int i =0;i<intermediate_result.size();i++){
        if (intermediate_result[i]>0){
        cout<<"closest point to "<<desire_point<<" is: "<<intermediate_result[i]<<endl;
      }}
      int number_a = 10;
      for (int i=0;i<2;i++)
      {
        for(int j=0;j<3;j++)
        {
          cout<<"hhh"<<endl;
          two_dim_array[i][j]=10;
//          number_a++;
          cout<<number_a;
        }
      }
//      cout<<"new array"<<endl;
//      for (int i=0;i<2;i++){
//        for(int j=0;j<3;j++){

//          cout<<two_dim_array[i][j]<<endl;
//        }
//      }




return 0;
}
