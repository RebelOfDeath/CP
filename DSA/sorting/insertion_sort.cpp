#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> &arr, int n){
	//insertion sort
	for(size_t i{1}; i < n; i++){
		int key = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {40, 42, 12, 35, 34, 23, 6, 39, 14, 16, 28, 29, 5, 30, 20, 4, 38, 13, 7, 25, 43, 46, 31, 36, 45, 10, 33, 47, 32, 9};

	solve(arr, 30);
	
	for(int num : arr){
		cout << num << " ";
	}
	cout << '\n';

	return 0;
}
