#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	
	cout << log2(n & -n) + 1 << '\n';

	return 0;
}
