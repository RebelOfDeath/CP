#include<bits/stdc++.h>

using namespace std;

bool check_palindrome(std::string &str){
	size_t i{0}, j{str.length()-1};
	while(i < j){
		if(str[i] != str[j]){
			return false;
		}
		i++;j--;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str {"ABCDCBA"};
	cout << std::boolalpha << check_palindrome(str) << '\n';
	

	return 0;
}
