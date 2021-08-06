#include<bits/stdc++.h>

using namespace std;


int solve(vector<int> &arr){
	unordered_set<int> s(arr.begin(), arr.end());
	int max_len{0};
	for(auto x : s){
		if(s.find(x-1) == s.end()){
			int count{1};
			while(s.find(x + count) != s.end()){
				count++;
			}
			max_len = max(max_len, count);
		}
	}
	return max_len;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {1, 9, 3, 4, 2, 10};

	cout << solve(arr) << '\n';

	return 0;
}
