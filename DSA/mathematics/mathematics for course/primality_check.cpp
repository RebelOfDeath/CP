#include<bits/stdc++.h>

using namespace std;

//there are two methods to solve thsi problem

//the first efficient manner of doing this is
bool isPrime(int n){
	if(n==1)
		return false;
	for(int i{2}; i*i <=2; i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}




//this is a more optimised approach

bool IsPrime(int n){
	if(n==1)
		return false;
	if(n==2 || n==3)
		return false;
	if(n%2==0 || n%3==0)
		return false;
	for(int i{5}; i*i<=n; i=i+6){
		if(n%i==0 || n%(i+2)==0)
			return false;
	}
	return true;
}


int main(){
	cout << isPrime(7) << "\n";
	cout << IsPrime(7) << "\n";	
	return 0;
}
