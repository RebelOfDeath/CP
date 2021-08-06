#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> a1 {15, 20, 5, 15};
	vector<int> a2 {15, 15, 15, 20, 10};

	unordered_set<int> s (a1.begin(), a1.end());
	for(auto x : a2){
		s.insert(x);
	}
	cout << s.size() << '\n';

	return 0;
}
