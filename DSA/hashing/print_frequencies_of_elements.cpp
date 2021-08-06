#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {10, 12, 10, 15, 10, 20, 12, 12};
	unordered_map<int, int> m;
	for(auto x : arr){
		m[x]++;
	}

	for(auto it = m.begin(); it != m.end(); it++){
		cout << it->first << " " << it->second << '\n';
	}


	return 0;
}
