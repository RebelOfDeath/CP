#include<bits/stdc++.h>

using namespace std;

int countDivisors(int n){
	int res{1};
	for(int i{2}; i*i<=n; i++){
		int count{0};
		while(n%i == 0){
			n = n/i;
			count++;
		}
		res = res*(count+1);
	}
	if(n >= 2){
		res = res*2;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long int n; cin >> n;

	cout << countDivisors(n) << '\n';

	return 0;
}
