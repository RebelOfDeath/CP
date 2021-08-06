#include<bits/stdc++.h>

using namespace std;

void PrintPowerSet(string str){
	int n = str.length();
	int powSize = pow(2, n);
	for(int count{0}; count < powSize; count++){
		cout << "'";
		for(int j{0}; j < n; j++){
			if((count & (1 << j)) != 0){
				cout << str[j];
			}
		}
		cout << "'";
		cout << '\n';
	}
}

int main(){
	string s; getline(cin, s);
	PrintPowerSet(s);
	return 0;
}
