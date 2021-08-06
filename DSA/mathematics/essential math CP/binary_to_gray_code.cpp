#include<bits/stdc++.h>

using namespace std;

int gray(int x){
	return x^(x>>1);
}

int main(){
	cout << gray(50) << '\n';
	return 0;
}
