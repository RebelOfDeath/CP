#include<bits/stdc++.h>

using namespace std;

void solve(string &str, vector<int> &lps){
	//implementation of creating a LPS array which is used in KMP algorithm
	//the basic idea for this algorithm is that:
		//if len = lps[i-1] and str[len] = str[i] then lps[i] = len + 1 len++;
		//
		//if str[i] != str[len]
			//if len == 0 then lps[i] = 0
			
		//else we recursively apply lps[]
			//len = lps[len-1]
			//then we compare str[i] with str[len]
	

	size_t n {str.length()}, len{0};
	lps[0] = 0;
	int i{1};
	while(i < n){
		if(str[i] == str[len]){
			len++; 
			lps[i]=len; 
			i++;
		}else{
			if(len==0){
				lps[i] = 0;
				i++;
			}else{
				len = lps[len-1];
			}
		}
	}

	

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str = "abacabad";

	vector<int> lps (str.length(), 0);

	solve(str, lps);

	for(int x : lps){
		cout << x << " ";
	}
	cout << '\n';


	return 0;
}
