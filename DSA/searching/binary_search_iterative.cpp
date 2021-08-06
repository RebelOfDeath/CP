#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &vec, int s){
	size_t l{0}, r{vec.size() - 1}, m { l + ((r-l) / 2) };
	while(l <= r){
		if(vec[m] > s){
			r = m  - 1;
			m = l + ((r-l) / 2);
		}else if(vec[m] < s){
			l = m + 1;
			m = l + ((r - l) / 2);
		}else if(vec[m]==s){
			return m;
		}
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> vec {10, 20, 30, 40, 50};

	cout << solve(vec, 50) << '\n';

	return 0;
}
