#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr){
	int max_sum{arr[0]};
	int max_upto = arr[0];
	for(int i{1}; i< arr.size(); i++){
		max_upto = max(max_upto + arr[i], arr[i]);
		max_sum = max(max_upto, max_sum);	
	}
	return max_sum;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {2, 3, -8, 7, -1, 2, 3};

	cout << solve(arr) << '\n';

	return 0;
}
