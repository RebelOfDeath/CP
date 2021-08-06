#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> &arr){
	//selection sort
	for(int i{0}; i < arr.size() - 1; i++){
		int min_ind = i;
		for(int j = i + 1; j < arr.size(); j++){
			if(arr[j] < arr[min_ind])
				min_ind = j;
		}
		swap(arr[min_ind], arr[i]);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {40, 42, 12, 35, 34, 23, 6, 39, 14, 16, 28, 29, 5, 30, 20, 4, 38, 13, 7, 25, 43, 46, 31, 36, 45, 10, 33, 47, 32, 9};

	solve(arr);
	
	for(int num : arr){
		cout << num << " ";
	}
	cout << '\n';

	return 0;
}

