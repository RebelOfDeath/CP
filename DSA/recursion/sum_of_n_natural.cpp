#include<bits/stdc++.h>

using namespace std;

int solve(int n){
	if(n<=1)
		return n;
	return n + solve(n - 1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;

	cout << solve(n) << '\n';

	return 0;
}
