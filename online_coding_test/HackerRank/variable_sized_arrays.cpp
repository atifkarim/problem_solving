/*
https://www.hackerrank.com/challenges/variable-sized-arrays/problem
*/

#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	// get length of array 'a' and number of queries
	int n, q;
	cin >> n >> q;

	// create vector of vectors
	vector<vector<int>> a(n);

	// fill each 2D vector i with k_i values
	for (int i = 0; i < n; i++) {
		// get the length k of the vector at a[i]
		int k;
		cin >> k;

		// fill the vector with k values
		a[i].resize(k);
        cout<<"the row size willl be: "<<a[i].size()<<endl;
		for (int j = 0; j < k; j++) {
			cin >> a[i][j];
		}
	}

    cout<<"**********************************"<<endl;

    for(int i =0;i<n;i++){
        for(int j =0;j<a[i].size();j++){
            cout<< a[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"**********************************"<<endl;

	// run queries on a
	for (int q_num = 0; q_num < q; q_num++) {
		// get i, j as the 'query' to get a value from a
		int i, j;
		cin >> i >> j;
		cout << a[i][j] << endl;
	}

	return 0;
}

/*

int main() {
	// get length of 2D array and number of queries
	int n, q;
	cin >> n >> q;

	// create 2D array
	int** a = new int*[n]();

	// fill 2D array with 1D subarrays
	for (int i = 0; i < n; i++) {
		// get the length of the 1D array at a[i]
		int k;
		cin >> k;

		// create the 1D subarray with the given length
		int* i_arr = new int[k]();

		// fill the subarray with k values
		for (int j = 0; j < k; j++) {
			cin >> i_arr[j];
		}

		// store the subarray in a
		a[i] = i_arr;
	}


	// run queries on a
	for (int q_num = 0; q_num < q; q_num++) {
		// get i, j as the 'query' to get a value from a
		int i, j;
		cin >> i >> j;
		cout << a[i][j] << endl;
	}

	// delete 2D array (each subarray must be deleted)
	for (int i = 0; i < n; i++) {
		delete[] a[i];
	}
	delete[] a;

	return 0;
}


*/