#include<bits/stdc++.h>

using namespace std;

bool solve(string s1, string s2){
	int i{0}, j{0};
	while(i < s1.length() && j < s2.length()){
		if(s1[i] == s2[j]){i++;j++;}
		else
			i++;
	}
	return (j==s2.length());
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s1 = "Roham";
	string s2 = "ham";

	cout << std::boolalpha << solve(s1, s2) << '\n';

	return 0;
}
