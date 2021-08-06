#include<bits/stdc++.h>

using namespace std;

//the first method for doing this is based ont eh Eclidean Algorithm
	//this algorithm states that gcd(a,b) = gcd(a-b, b)
	//because:
		//let 'g' be GCD of 'a' and 'b'
		//a=gx, b=gy and GCD(x, y) = 1
		//(a-b) = g(x-y)
int gcd1(int a, int b){
	while(a != b){
		if(a>b)
			a = a-b;
		else
			b = b-a;
	}
	return a;
}




//This is the optimized implementation of the same algorithm

int gcd2(int a, int b){
	if(b==0)
		return a;
	else
		return gcd2(b, a%b);
}



int main(){
	cout << gcd1(10, 15)<<"\n";
	cout << gcd2(10, 15)<<"\n";
	return 0;
}
