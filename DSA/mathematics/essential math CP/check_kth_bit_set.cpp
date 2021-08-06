#include<bits/stdc++.h>

using namespace std;

//this method uses left shift to check wether the k'th bit is set or not


void kthBit(int n, int k){
	if(n & ( 1 << (k-1)) != 0){
		cout << "yes" << '\n';
	} else {
		cout << "No" << '\n';
	}
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k; cin >> n >> k;
	kthBit(n, k);

	return 0;
}
