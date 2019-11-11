#include<iostream>
#include<vector>
using namespace std;

int given_array[] = {-1,0,2,-3,1};
int length_array = sizeof(given_array)/sizeof(given_array[0]);
std::vector< int > absolute_array;
//int absolute_array[length_array]={};
//int absolute_array[length_array];
int desire_point = 0;
std::vector< int > diff_array;
std::vector< int > abs_diff_array;
std::vector< int > intermediate_result;

int main(){
  cout<<"length of abs array: "<<sizeof(absolute_array)/sizeof(absolute_array[0])<<endl;
  cout<<"--------"<<endl;
  cout<<"length of given array: "<<sizeof(given_array)/sizeof(given_array[0])<<endl;

  for (int i =0; i <length_array;i++){
//    cout<<"given_array: "<<endl;
//    cout<<given_array[i]<<endl;
    int j = abs(given_array[i]);
    cout<<" j val: "<<j<<endl;
    absolute_array.push_back(j);
    cout<<"push done"<<endl;
//    cout<<'changed value: '<<absolute_array[i]<<endl;
  }
//  cout<<"length of abs array: "<<sizeof(absolute_array)/sizeof(absolute_array[0])<<endl;
  cout<<"size abs array: "<<absolute_array.size()<<endl;

  for (int h =0;h<5;h++){
//    cout<<absolute_array[h]<<endl;
  }
cout<<"---------------------------------------"<<endl;
  for (int i =0;i<length_array;i++){
    int difference = desire_point - absolute_array[i];
    diff_array.push_back(difference);
    int abs_difference = abs(difference);
    abs_diff_array.push_back(abs_difference);

  }

  for (int i=0;i<length_array;i++){
    cout <<"diff array val: "<<diff_array[i]<<"  "<<abs_diff_array[i]<<endl;
  }

  int smallest = abs_diff_array[0] ;
      for ( int i=1;  i < sizeof(abs_diff_array)/sizeof(abs_diff_array[0]);  ++i ){
          if ( abs_diff_array[i] < smallest ){
               smallest = abs_diff_array[i] ;

      cout <<"smallest value: "<< smallest << '\n' ;
          }}

      for (int i =0;i<length_array;i++){

        int res = abs(smallest)-abs(abs_diff_array[i]);
        if (res==0){
          cout<<"res: "<<res<<endl;
          intermediate_result.push_back(given_array[i]);
        }

      }
      cout<<"---------------------------------"<<endl;
cout<<sizeof(abs_diff_array)/sizeof(abs_diff_array[0])<<endl;
//      for (int i =0;i<sizeof(intermediate_result)/sizeof(intermediate_result[0]);i++){
//        cout<<endl;
//        cout<<"here look: "<<intermediate_result[i]<<endl;
//      }
return 0;
}
