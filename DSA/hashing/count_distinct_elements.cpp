#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {15, 12, 13, 12, 13, 13, 18};
	unordered_set<int> s(arr.begin(), arr.end());
	cout << s.size() << '\n';

	return 0;
}
