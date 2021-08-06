#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//the time complexity for this function is O(log n)
	//and the aux space needed is O(1) 
	int x, n; cin >> x >> n;

	int res{1};
	while(n > 0){
		if(n & 1)
			res *= x;
		x *= x;
		n = n/2;
	}
	cout << res << '\n';

	return 0;
}
