#include<bits/stdc++.h>

using namespace std;

const int CHAR = 256;

bool are_anagram(string &s1, string &s2){
	if(s1.length() != s2.length())
		return false;
	int count[CHAR] = {0};
	for(int i{0}; i < s1.length(); i++){
		count[s1[i]]++;
		count[s2[i]]--;
	}
	for(int i{0}; i < CHAR; i++){
		if(count[i] != 0){
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s1 = "listen";
	string s2 = "silent";

	cout << std::boolalpha << are_anagram(s1, s2) << '\n';

	return 0;
}
