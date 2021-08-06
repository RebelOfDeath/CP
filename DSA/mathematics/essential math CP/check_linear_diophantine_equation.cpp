#include<bits/stdc++.h>

using namespace std;

bool isPossible(int a, int b, int c){
	return ((c%__gcd(a, b)) == 0);
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c; cin >> a >> b >> c;
	cout << std::boolalpha;
	cout << isPossible(a, b, c) << '\n';
	
	return 0;
}
