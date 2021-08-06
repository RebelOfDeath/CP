#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr, int x){
	size_t low{0}, high{arr.size() - 1};
	while(low <= high){
		int mid = low + ((high - low) / 2);
		if(arr[mid] == x) return mid;
		if(arr[low] < arr[mid]){
			if(x >= arr[low] && x < arr[mid])
				high = mid - 1;
			else
				low = mid + 1;
		}
		else{
			if(x > arr[mid] && x <= arr[high])
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	return -1;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {100, 200, 400, 1000, 10, 20};
	cout << solve(arr, 10) << '\n';	

	return 0;
}
