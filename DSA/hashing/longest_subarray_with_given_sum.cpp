#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr, int sum){
	unordered_map<int, int> m;
	int pref_sum{0}, res{0};
	for(int i{0}; i <  arr.size();  i++){
		pref_sum += arr[i];
		if(pref_sum == sum){
			res == i+1;
		}
		if(m.find(pref_sum) == m.end()){
			m.insert({pref_sum, i});
		}
		if(m.find(pref_sum - sum) != m.end()){
			res = max(res, i - m[pref_sum - sum]);
		}
	}
	return res;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {5, 2, 3};
	int sum {5};
	
	cout << solve(arr, sum) << '\n';
	return 0;
}
