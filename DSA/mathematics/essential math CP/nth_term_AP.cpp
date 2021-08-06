#include<bits/stdc++.h>

using namespace std;

#define el '\n'

void solve(){
	int a, n, d;
	cin >> a >> n >> d;
	int answer;
	answer = a + (n-1) * d;
	cout << answer << el;
}

int32_t main(){
	int T{1};
	cin >> T;
	while(T--){
		solve();
	}
	return 0;	
}
