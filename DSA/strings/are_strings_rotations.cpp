#include<bits/stdc++.h>

using namespace std;

bool are_rotations(string s1, string &s2){
	if(s1.length() != s2.length())
		return false;
	return ((s1+s1).find(s2) != string::npos);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s1 = "ABCD";
	string s2= "CDAB";

	cout << std::boolalpha << are_rotations(s1, s2) << '\n';

	return 0;
}
