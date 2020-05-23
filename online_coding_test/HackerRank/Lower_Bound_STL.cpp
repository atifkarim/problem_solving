/*
https://www.hackerrank.com/challenges/cpp-lower-bound/problem?h_r=next-challenge&h_v=zen
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iostream>
using namespace std;

int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int m, num;
   cin >> m;
   vector<int> v;
   for (int i=0; i<m; i++){
       cin >> num;
       v.push_back(num);
   }
   int n, val;
   cin >> n;
   for (int i=0; i<n; i++){
       cin >> val;
       vector<int>::iterator low = lower_bound(v.begin(), v.end(), val);
       if (v[low - v.begin()] == val){
           cout << "Yes " << (low - v.begin()+1) << endl;
       }else{
           cout << "No " << (low - v.begin()+1) << endl;}
   }
   return 0;
}

/*
int main() {

    vector <int> a;
    int b;
    cin>>b;
    for (int i =0;i<b;i++){
        int c;
        cin>>c;
        a.push_back(c);
    }
    for(int i =0;i<b;i++){
        cout<<a[i]<<" ";
    }

    int *ptr;
    ptr = &a[0];


    int d = 1;
    int e;
    cin>>e;
    cout<<"\n";
    while (d<=e)
    {
        int f;
        cin>>f;



        // for(int i =0;i<b;i++){
        //     // cout<<"num: "<<a[i]<<endl;
        //     if (f == a[i])
        //     {
        //         cout<<"Yes "<<(i+1)<<endl;
        //     }
        //     else
        //     {
        //         cout<<"No "<<endl;
        //     }
            
            

        // }

        // cout<<"\n 1 bar while sesh\n"<<endl;
        d++;
    }
    



    return 0;
}

*/