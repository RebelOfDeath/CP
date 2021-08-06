#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> a {10, 15, 20, 5, 30};
	vector<int> b {30, 5, 30, 8};

	unordered_set<int> s1(a.begin(), a.end());
	unordered_set<int> s2(b.begin(), b.end());
	
	int count{0};
	for(auto x : s1){
		if(s2.find(x) != s2.end()){
			count++;
		}
	}
	cout << count << '\n';

	return 0;
}
