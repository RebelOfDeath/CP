#include<bits/stdc++.h>

using namespace std;

//to find the maximum circular subarray sum
//1- you need to find the minimum sum subarray of the given array using kadane's modified algorithm
//2- then you subtract that the sum of that from the sum of the whole array

int NormalMaxSum(vector<int> &arr){
	int res = arr[0], max_ending{arr[0]};size_t n{arr.size()};
	for(int i{1}; i < n; i++){
		max_ending = max(arr[i], max_ending + arr[i]);
		res = max(res, max_ending);
	}
	return res;
}


int solve(vector<int> &arr){
	int max_normal {NormalMaxSum(arr)};size_t n{arr.size()};
	if(max_normal < 0)
		return max_normal;
	int arr_sum{0};
	for(int i{0}; i < n; i++){
		arr_sum += arr[i];
		arr[i] = -arr[i];
	}
	int max_circular = arr_sum + NormalMaxSum(arr);
	return max(max_normal, max_circular);
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {3, -4, 5, 6, -8, 7}; //the answer to this will be 17 because it would be the sum of 7, 3, -4, 5, 6
	cout << solve(arr) << '\n';

	return 0;
}
