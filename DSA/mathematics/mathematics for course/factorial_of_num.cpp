#include<bits/stdc++.h>

using namespace std;

int fact_num(long n){
	long res{1};
	for(int i{1}; i <= n; i++){
		res *= i;
	}
	return res;
}


int fact_num_recursive(long n){
	if(n==0)
		return 1;
	else
		return n * fact_num_recursive(n-1);
}

int main(){
	printf("%d \n", fact_num(4));
	printf("%d \n", fact_num_recursive(4));
	return 0;
}
