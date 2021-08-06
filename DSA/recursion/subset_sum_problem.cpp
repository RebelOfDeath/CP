#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> nums, int n, int sum){
	if(n==0)
		return (sum==0)? 1 : 0;
	return solve(nums, n-1, sum) + solve(nums, n-1, sum - nums[n-1]);
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, sum; cin >> n >> sum;
	vector<int> nums;
	for(int i{0}; i<n; i++){
		int temp; cin >> temp;	
		nums.push_back(temp);
	}

	cout << solve(nums, n, sum) << '\n';

	return 0;
}
