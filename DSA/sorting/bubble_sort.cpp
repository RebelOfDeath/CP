#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> &arr){
	//buuble sort
	size_t n = arr.size();
	for(size_t i{0}; i < (n-1); i++){
		bool swapped = false;
		for(size_t j{0}; j < (n-i-1); j++){
			if(arr[j] > arr [j+1]){
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}
		if(swapped == false)
			break;
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
