#include<bits/stdc++.h>

using namespace std;

int solve(int n, int k){
	if(n==1)
		return 0;
	return (solve(n-1, k) + k) % n;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k; cin >> n >> k;

	cout << solve(n, k) << '\n';

	return 0;
}
