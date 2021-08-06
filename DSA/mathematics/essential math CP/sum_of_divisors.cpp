#include<bits/stdc++.h>

using namespace std;

int sumFactors(int n){
	int res{1};
	for(int i{2}; i*i<=n; i++){
		int sum = 1;
		int term = 1;
		while(n%i == 0){
			n = n/i;
			term = term * i;
			sum += term;
		}
		res = res*sum;
	}
	if(n>=2)
		res *= (n+1);
	return res;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;

	cout << sumFactors(n) << '\n';

	return 0;
}
