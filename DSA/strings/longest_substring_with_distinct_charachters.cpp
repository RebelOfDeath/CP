#include<bits/stdc++.h>

using namespace std;

int solve(string &str){
	size_t n = str.length(), res = 0;
	vector<int> prev(256, -1);
	int i{0};
	for(int j{0}; j < n; j++){
		i = max(i, prev[str[j]]+1);
		int maxEnd = j - i + 1;
		res = max((int)res, maxEnd);
		prev[str[j]] =j;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str = "abcadbd";

	cout << solve(str) << '\n';

	return 0;
}
