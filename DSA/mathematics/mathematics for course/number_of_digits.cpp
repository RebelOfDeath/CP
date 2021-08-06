#include<bits/stdc++.h>

using namespace std;

int CountDigit1(long n){//this uses a iterative Solution to count the number of digits in a number
	int count = 0;
	while (n!=0){
		n = n/10;
		count++;
	}
	return count;
}


int CountDigit2(long n){//this function uses a recursive solution to count the number of digits
	if (n==0)
		return 0;
	return 1 + CountDigit2(n/10);
}


int CountDigit3(long n){
	return floor(log10(n) + 1);
}

int main(){
	printf("%d %d %d\n", CountDigit1(123), CountDigit2(123), CountDigit3(123));
	return 0;
}
