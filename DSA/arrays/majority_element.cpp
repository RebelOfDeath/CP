#include<bits/stdc++.h>

using namespace std;


int solve(vector<int> &arr){
	//first we will find a candidate for the majority element
	//we will do this by using moore's voting algorithm
	int res{0}, count{1};
	for(int i{0}; i < arr.size(); i++){
		if(arr[res] == arr[i])
			count++;
		else
			count--;
		if(count == 0){
			res = i;
			count = 1;
		}
	}
	count = 0;
	//this checks if the candidate is a majority element
	for(int i{0}; i < arr.size(); i++){
		if(arr[res] == arr[i])
			count++;
	}
	if(count <= arr.size()/2)
		res = -1;
	return res;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {3, 7, 4, 7, 7, 7};
	cout << solve(arr) << '\n';

	return 0;
}
