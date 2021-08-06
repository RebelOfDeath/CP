#include<bits/stdc++.h>

using namespace std;

int maxPF(int n){
	int res = -1;
	for(int i{2}; i*i<=n; i++){
		while(n%i==0){
			res = i;
			n = n/i;
		}
	}
	if(n>1)
		return n;
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	
	int n, fact; cin >> n >> fact;

	int p = maxPF(n);
	int res = 0;
	while(fact > 0){
		fact = fact / p;
		res = res + fact;
	}
	cout << res << '\n';
	
	
	return 0;

}
