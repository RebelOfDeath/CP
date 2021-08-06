#include<bits/stdc++.h>

using namespace std;

int main(){

	int n; cin >> n;

	{
		if(n <= 1)
			cout  << n << '\n';
		int a{0}, b{1}, c;
		for(int i{2}; i <= n; i++){
			c = a+b;
			a = b;
			b = c;
		}
		cout << c << '\n';
	}

	return 0;
}
