#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int> &arr){
	stack<int> s;
	s.push(0);
	vector<int> prev_greater;
	prev_greater.push_back(-1);
	for(int i{1}; i < arr.size(); i++){
		while(s.empty()== false && arr[s.top()] < arr[i]){
			s.pop();
		}

		prev_greater.push_back(s.empty() ? -1 : arr[s.top()]);
		s.push(i);

	}
	return prev_greater;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {15, 10, 18, 12, 4, 6, 2, 8};

	for(int x: arr){
		cout << x << " ";
	}
	cout << '\n';

	vector<int> prev_greater = solve(arr);

	for(int x : prev_greater){
		cout << x << " ";
	}
	cout << '\n';


	return 0;
}