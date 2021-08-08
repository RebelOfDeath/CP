#include<bits/stdc++.h>

using namespace std;

void reverse(string &str, int low, int high){
	while(low <= high){
		swap(str[low], str[high]);
		low++;
		high--;
	}
}

void reverse_words(string &str){
	int start{0};
	for(int end{0}; end < str.length(); end++){
		if(str[end] == ' '){
			reverse(str, start, end - 1);
			start = end + 1;
		}
	}
	reverse(str, start, str.length()-1);
	reverse(str, 0, str.length()-1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s; getline(cin, s);

	reverse_words(s);

	cout << s << '\n';

	return 0;
}
