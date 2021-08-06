#include<bits/stdc++.h>

using namespace std;

void solve(string &s, string curr = "", int i = 0){
	if(i==s.length()){
		cout << "'" << curr << "'" << '\n';
		return;
	}
	solve(s, curr, i+1);
	solve(s, curr+s[i], i+1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s; getline(cin, s);

	solve(s);
		
	return 0;
}
