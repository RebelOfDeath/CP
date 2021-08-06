#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr){
	int count{0},max_count{0};
	for(int i{1}; i < arr.size(); i++){
		if((arr[i]%2  == 0 && arr[i-1]%2 !=0) || (arr[i]%2 != 0 && arr[i-1]%2==0)){
			count++;
			max_count = max(max_count, count);
		}
		else
			count = 1;
	}
	return max_count;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> arr {10, 12, 14, 7, 8};
	
	cout << solve(arr) << '\n';

	return 0;
}
