#include<bits/stdc++.h>

using namespace std;

int rev(long n){
	long rev{0};
	while(n > 0){
		rev = (rev*10) + (n%10);
		n = n / 10;
	}
	return rev;
}

bool is_num_palindrome(long n){
	if(n == rev(n)){
		return true;
	}else{
		return false;
	}
}

int main(){
	printf(is_num_palindrome(78987)? "True\n" : "False\n");
	return 0;
}
