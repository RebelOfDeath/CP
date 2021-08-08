#include<bits/stdc++.h>

using namespace std;

const int CHAR = 256;

int solve(string &str){
	vector<int> occur (CHAR, -1);
	int i{0};
	for(char x : str){
		if(occur[(int)x] != -1){
			return occur[(int)x];
		}else{
			occur[(int)x] = i;
		}
		i++;
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str = "abcd"; // so the first repeating element would be b at index 1

	cout << solve(str) << '\n';

	return 0;
}
