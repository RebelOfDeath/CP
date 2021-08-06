#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr, int x){
	size_t low{0}, high{arr.size() - 1};
	while(low <= high){
		int mid = low + ((high - low) / 2);
		if(arr[mid] > x)
			high = mid - 1;
		else if(arr[mid] < x)
			low = mid + 1;
		else{
			if(mid==0 || arr[mid-1] != arr[mid])
				return mid;
			else
				high = mid - 1;
		}
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> arr {5, 10, 10, 20, 20, 20};

	cout << solve(arr, 20) << '\n';

	return 0;
}
