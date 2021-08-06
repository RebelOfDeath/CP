#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr){
	unordered_map<int, int> m;
	int sum{0}, res{0};
	m.insert({0, -1});
	for(int i{0}; i < arr.size(); i++){
		if(arr[i] == 0){
			sum--;
		}else{
			sum++;
		}
		
		if(m.find(sum) != m.end()){
			res = max(res, i - m[sum]);
		}else{
			m[sum] = i;
		}
	}
	return res;

}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {0, 0, 1, 0, 1, 1};

	cout << solve(arr) << '\n';

	return 0;
}
