#include<bits/stdc++.h>

using namespace std;


//the efficient method to find out the prime factors of a number is
void PrintPrimeFactors(int n){
	if(n <= 1)
		return;
	for(int i{2}; i*i <= n; i++){
		while(n%i == 0){
			printf("%d \n", i);
			n = n/i;
		}
	}
	if(n>1)
		printf("%d \n",n);
}



//you can also further optimize the  algorithm to the following code

void PrintPrimeFactors_opt(int n){
	while(n%2 == 0){
		printf("2 \n");
		n = n/2;
	}
	while(n%3 == 0){
		printf("3 \n");
		n = n/3;
	}
	for(int i{5}; i*i <= n; i += 6){
		while (n%i == 0){
			printf("%d \n", i);
			n = n/i;
		}
		while (n%(i+2) == 0){
			printf("%d \n", i+2);
			n = n/(i+2);
		}
	}
	if(n>3)
		printf("%d \n", n);
}



int main(){
	PrintPrimeFactors(200);
	printf("\n");
	PrintPrimeFactors_opt(200);
	return 0;
}
