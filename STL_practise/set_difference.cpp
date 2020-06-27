/*
https://www.fluentcpp.com/2017/01/09/know-your-algorithms-algos-on-sets/
*/

#include<iostream>
#include <algorithm>
#include <iterator>
#include <set>
#include <vector>
 
using namespace std;
int main(){

   std::vector<int> A = {1,2,3,4,5,6}; // sorted vector
   std::vector<int> A_1 = {1,2,3,4};
   std::set<int> B = {3,4,5,6,7,8,9,0}; // std::set is always sorted
  
   std::vector<int> results_diff;
   std::vector<int> results_intersection; 

   std::set_difference(A.begin(), A.end(),B.begin(), B.end(),std::back_inserter(results_diff));
   std::set_intersection(A.begin(), A.end(),B.begin(), B.end(),std::back_inserter(results_intersection));


for(auto s: results_intersection){
   cout<<s<<" ";
}
cout<<"\n";
bool AincludesB = std::includes(A.begin(), A.end(), A_1.begin(), A_1.end()); // it checks all member of A_1 is available in A or not
cout<<AincludesB<<"\n";

return 0;}
