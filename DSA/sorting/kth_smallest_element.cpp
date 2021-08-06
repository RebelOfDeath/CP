#include<bits/stdc++.h>

using namespace std;

int partition(vector<int> &arr, int l, int r){
	int p = arr[r];
	int i{l - 1};
	for(int j{l}; j <= r-1; j++){
		if(arr[j] < p){
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[r]);
	return (i+1);
}

int solve(vector<int> &arr, int n, int k){
	int l{0}, r{n-1};
	while(l <= r){
		int p = partition(arr, l, r);
		if(p == k)
			return arr[p];
		else if(p > k-1)
			r = p - 1;
		else
			l = p + 1;
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {10, 4, 5, 8, 11, 6, 26};//the sorted version of this would be {4, 5, 6, 8, 10, 11, 26}
	
	cout << solve(arr, 7, 5) << '\n';//the last number should be entered with 0 indexing in mind

	return 0;
}
