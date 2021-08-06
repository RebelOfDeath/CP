#include<bits/stdc++.h>

using namespace std;


int solve(vector<int> &arr, int l, int r, int x){
	int mid = l + ((r-l)/2);
	if(r < l)
		return -1;
	if(arr[mid] == x)
		return mid;
	else if(arr[mid] > x){
		return solve(arr, l, mid-1, x);
	}else{
		return solve(arr, mid + 1, r, x);
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {10, 20, 30, 40, 50, 60, 70};
	cout << solve(arr, 0, arr.size(), 50) << '\n';

	return 0;
}
