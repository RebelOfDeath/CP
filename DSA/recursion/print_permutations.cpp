#include<bits/stdc++.h>

using namespace std;

void solve(string s, int i = 0){
	if(i == s.length()-1){
		cout << s << "\n";
		return;
	}
	for(int j=i; j<s.length(); j++){
		swap(s[i], s[j]);
		solve(s, i+1);
		swap(s[i], s[j]);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s; getline(cin, s);

	solve(s);

	return 0;
}
