#include<bits/stdc++.h>

using namespace std;

int dCount(int n){
	if(n==1 || n==2)
		return (n-1);
	else
		return (n-1)*(dCount(n-2) + dCount(n-1));
}


int dCount_DP(int n){
	if(n==1 || n==2)
		return  (n-1);
	int a{0}, b{1}, c{0};
	for(int i{3}; i <= n; i++){
		c = (i-1)*(a+b);
		a = b;
		b = c;
	}
	return c;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cout << dCount(5) << " " << dCount_DP(5) << '\n';


	return 0;
}
