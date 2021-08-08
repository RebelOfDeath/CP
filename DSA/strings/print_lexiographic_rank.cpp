#include<bits/stdc++.h>

using namespace std;

const int CHAR=256;

int fact(int n) 
{ 
    return (n <= 1) ? 1 : n * fact(n - 1); 
}

int find_rank(string &str){
	
	//here we assume that the charachters in this string are distinct
	
    int res = 1; 
    int n=str.length();
    int mul= fact(n);
    int count[CHAR]={0};
    for(int i=0;i<n;i++)
        count[str[i]]++;
    for(int i=1;i<CHAR;i++)
        count[i]+=count[i-1];
    for(int i=0;i<n-1;i++){
        mul=mul/(n-i);
        res=res+count[str[i]-1]*mul;
        for(int j=str[i];j<CHAR;j++)
            count[j]--;
    }
    return res;


}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str = "STRING";

	cout << find_rank(str) << '\n';

	return 0;
}
