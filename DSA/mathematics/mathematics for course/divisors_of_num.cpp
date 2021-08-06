#include<bits/stdc++.h>

using namespace std;

//this code prints all the divisors of a given number in non sorted order

void PrintDivisors(int n){
	for(int i{1}; i*i <= n; i++){
		if(n%i == 0){
			printf("%d ", i);
			if(i != n/i)
				printf("%d ", n/i);
		}
	}
}


//this function prints all the divisors of a given number in sorted order

void PrintDivisors2(int n){
	int i {1};
	for(; i*i < n; i++){
		if(n%i == 0){
			printf("%d ", i);
		}
	}
	for(; i >= 1; i--){
		if(n%i == 0){
			printf("%d ", n/i);
		}
	}
}

int main(){
	PrintDivisors(200);
	printf("\n");
	PrintDivisors2(200);
	return 0;
}
