#include<bits/stdc++.h>

using namespace std;

void solve(int n, string a = "a", string b = "b", string c = "c"){
	if(n==1){
		cout << "from " << a << " to " << c << '\n';	
		return;
	}else{
		solve(n-1, a, c, b);
		cout << "from " << a << " to " << c << '\n';
		solve(n-1, b, a, c);
	}
	return;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	
	solve(n);
		
	return 0;
}
