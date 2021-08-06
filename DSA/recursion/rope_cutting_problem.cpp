#include<bits/stdc++.h>

using namespace std;

int solve(int n, int a, int b, int c){
	if(n==0)
		return 0;
	if(n < 0)
		return -1;
	int res = max({solve(n-a, a, b, c), solve(n-b, a, b, c), solve(n-c, a, b, c)});
	if(res == -1)
		return -1;
	return res+1;	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a, b, c; cin >> n >> a >> b >> c;

	cout << solve(n, a, b, c) << '\n';

	return 0;
}
