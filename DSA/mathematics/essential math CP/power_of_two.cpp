#include<bits/stdc++.h>

using namespace std;

#define el '\n'

bool isPow2(int n){
	if(n==0)
		return false;
	return ((n & (n-1)) == 0);
}	


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cout << std::boolalpha;
	cout << isPow2(4) << el;
	cout << isPow2(8) << el;
	cout << isPow2(3) << el;

	return 0;
}
