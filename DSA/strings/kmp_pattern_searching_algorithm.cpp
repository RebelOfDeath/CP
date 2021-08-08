#include<bits/stdc++.h>

using namespace std;


void fill_lps(string &str, vector<int> &lps){
	size_t n{str.length()}, len{0};
	int  i{1};
	while(i < n){
		if(str[i] == str[len]){
			len++;
			lps[i] = len;
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



void kmp(string &txt, string &pat){
	int N = txt.length();
	int M = pat.length();

	vector<int> lps (M , 0);
	
	fill_lps(pat, lps);

	int i{0}, j{0};
	while(i < N){
		if(pat[j] == txt[i]){
			i++;
			j++;
		}
		if(j==M){
			cout << i-j << " ";
			j = lps[j-1];
		}else if(i < N && pat[j] != txt[i]){
			if(j==0){
				i++;
			}else{
				j = lps[j-1];
			}
		}
	}
	cout << '\n';
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string txt = "aaaaab";
	string pat = "aaaa";

	kmp(txt, pat);

	return 0;
}
