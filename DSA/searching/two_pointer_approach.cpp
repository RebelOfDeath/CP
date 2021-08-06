//the problem statement
//given an sorted arrat and a sum, find if there is a pair with given sum.
//you could also use hashing to solve this but that would require O(n) aux space

#include<bits/stdc++.h>

using namespace std;

bool solve(vector<int> &arr, int x){
	size_t l{0}, r{arr.size() - 1};
	while(l <= r){
		int sum{arr[l] + arr[r]};		
		if(sum == x)
			return true;
		if(sum > x)
			r--;
		else if(sum < x)
			l++;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {2, 5, 8, 12, 30};
	cout << std::boolalpha << solve(arr,20) << '\n';

	return 0;
}
