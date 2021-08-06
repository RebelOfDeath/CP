#include<bits/stdc++.h>

using namespace std;

bool solve(string &s, int l){
	if(l < (s.length()/2))
	       return true;
	if(s[l-1] == s[s.length()-l])
		return solve(s, l-1);
	return false;	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s; getline(cin, s);
       		

	cout << std::boolalpha << solve(s, s.length()) << '\n';

	return 0;
}

