#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr, int m){
	if(m > arr.size())
		return -1;
	sort(arr.begin(), arr.end());
	int res{arr[m-1] - arr[0]};
	for(int i{0}; (i+m-1) < arr.size(); i++){
		res = min(res, arr[i+m-1] - arr[i]);
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {7, 3, 2, 4, 9, 12, 56};
	int m{3};

	cout << solve(arr, m) << '\n';

	return 0;
}
