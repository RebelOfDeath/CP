#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr){
	stack<int> s;
	int res = 0;
	int tp = 0;
	int curr = 0;
	for(int i{0}; i < arr.size(); i++){
		while(s.empty() == false && arr[s.top()] <= arr[i]){
			tp =s.top();s.pop();
			curr = arr[tp] * (s.empty() ? i : (i-s.top()-1));
			res = max(res, curr);
		}
		s.push(i);
	}
	while(s.empty() == false){
		tp =s.top(); s.pop();
		curr = arr[tp] * (s.empty() ? arr.size() : arr.size() - s.top() - 1);
		res = max(res, curr); 

	}	
	return res;
}	

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {6, 2, 5, 4, 1, 5, 6};

	cout << solve(arr) << '\n';

	return 0;
}