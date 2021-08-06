#include<bits/stdc++.h>

using namespace std;

void totfun(int n){
	int phi[n+1];
	for(int i{1}; i <= n; i++){
		phi[i] = i;
	}
	cout << phi[1] << " ";
	for(int p{2}; p<=n; p++){
		if(phi[p] == p){
			phi[p] = p-1;
			for(int i{2*p}; i<=n; i = i+p){
				phi[i] = (phi[i]/p)*(p-1);
			}
		}
		cout << phi[p] << " ";
	}
	cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	totfun(n);
		
	return 0;
}
