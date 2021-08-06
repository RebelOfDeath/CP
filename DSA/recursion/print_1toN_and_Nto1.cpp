#include<bits/stdc++.h>

using namespace std;

void one_to_n(int n){
	if(n==0)
		return;
	one_to_n(n-1);
	cout << n << " ";
}

void n_to_one(int n){
	if(n==0)
		return;
	cout << n << " ";
	n_to_one(n-1);
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;

	one_to_n(n);
	cout << '\n';
	n_to_one(n);
	cout << '\n';


	return 0;
}
