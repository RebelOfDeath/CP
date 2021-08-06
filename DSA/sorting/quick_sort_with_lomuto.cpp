#include<bits/stdc++.h>

using namespace std;

int partition(vector<int> &arr, int l, int h){
	int p = arr[h];//here we will assume that the pivot is always the last element
		       // if you wanted to have a pivot point be a input variabale instead
		       // of defining p you would just swap arr[h] with  arr[p] then the 
		       // algorithms would preform the procedure the same way you would want
		       // it to
	int i {l - 1};
	for(int j{l}; j <= h-1; j++){
		if(arr[j] < p){
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[h]);
	return (i+1);
}


void solve(vector<int> &arr, int l, int h){
	if( l < h){
		int p = partition(arr, l, h);
		solve(arr, l, p-1);
		solve(arr, p+1, h);
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {8, 4, 7, 9, 3, 10, 5};
	

	//for this implementation of the lomuto partition algorithm 
	//we will assume that the pivot is always the last elemet
	solve(arr, 0, 6);

	for(int num : arr){
		cout << num << " ";
	}
	cout << '\n';

	return 0;
}

