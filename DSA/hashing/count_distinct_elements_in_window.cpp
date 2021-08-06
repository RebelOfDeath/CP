#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> &arr, int k){
	unordered_map<int, int> m;
	for(int i{0}; i < k; i++){
		m[arr[i]]++;
	}
	cout << m.size() << " ";
	for(int i{0}; i < (arr.size() - k ); i++){
		m[arr[i]]--;
		if(m[arr[i]] == 0){
			m.erase(arr[i]);
		}
		m[arr[i+k]]++;
		cout << m.size() << " ";
	}
	cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {10, 20, 10, 10, 30, 40};
	int k{4};

	solve(arr, k);

	return 0;
}
