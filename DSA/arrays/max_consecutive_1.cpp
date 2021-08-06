#include<bits/stdc++.h>

using namespace std;

int solve(vector<bool> &arr){
	int count{0}, max_count{0};
	for(int i{0}; i < arr.size(); i++){
		if (arr[i] == 0){
			if(count > max_count)
				max_count = count;
			count = 0;
		}else{
			count++;
		}
	}
	if(count>max_count)
		max_count = count;
	return max_count;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<bool> arr {1, 0, 1, 1, 1, 1, 0, 1, 1};
	cout << solve(arr) << '\n';

	return 0;
}
