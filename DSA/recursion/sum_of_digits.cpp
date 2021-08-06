#include<bits/stdc++.h>

using namespace std;

int solve(int n){
	if(n<=9)
		return n;
	return n%10 + solve(n/10);	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;

	cout << solve(n) << '\n';

	return 0;
}
