#include<bits/stdc++.h>

using namespace std;

int toBinary(int x){
	int res = 0;
	while( x > 0){
		res = res ^ x;
		x = x >> 1;
	}
	return res;
}

int main(){
	cout << toBinary(43) << '\n';
	return 0;
}
