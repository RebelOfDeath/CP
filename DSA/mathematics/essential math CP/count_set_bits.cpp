#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, answer; cin >> n;

	//you can achieve this by using the brian kerningam's method
	//the time complexity for the following algorithms is theta(set bit count)
	//there is another method for doing the same thing, for that method check out count_set_bits_lookup_table.cpp file in the same folder
	//
	while( n > 0) {
		n = ( n & (n-1));
		answer++;
	}
	cout << answer;

	return 0;
}
