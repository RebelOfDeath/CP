#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr){
	size_t low{0}, high{arr.size() - 1}, n{arr.size()};
	while(low <= high){
		int mid = low  + ((high - low) / 2);
		if((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid==(n - 1) || arr[mid+1] <= arr[mid]))
			return  mid;
		if(mid > 0 && arr[mid-1] >= arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {10, 7, 8, 20, 12};

	cout << solve(arr) << '\n';

	return 0;
}
