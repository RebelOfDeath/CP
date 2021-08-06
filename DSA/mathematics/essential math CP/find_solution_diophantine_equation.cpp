#include<bits/stdc++.h>

using namespace std;

int gcdExt(int a, int b, int &x, int &y){
	if(b==0){x = 1; y = 0; return a;};
	int x1, y1;
	int g = gcdExt(b, a%b, x1, y1);
	x = y1;
	y = x1 - (a/b)*y1;
	return g;
}



//for the implementation of this function we persume that a!=0 && b!=0
void printSol(int a, int b, int c){
	if(a == 0 && b==0){
		if(c!=0)
			cout << "No Solution" << '\n';
		else{
			cout << "x = 0" << '\n';
			cout << "y = 0" << '\n';
		}
		return;
	}

	int x0, y0;
	int g = gcdExt(a, b, x0, y0);
	if(c%g != 0)
		cout << "No Solution" << '\n';
	else{
		cout << "x = " << x0*(c/g)  << '\n';
		cout << "y = " << y0*(c/g)  << '\n';
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c; cin >> a >> b >> c;
	printSol(a, b, c);


	return 0;
}

