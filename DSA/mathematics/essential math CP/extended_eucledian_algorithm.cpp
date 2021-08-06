#include<bits/stdc++.h>

using namespace std;

int gcdExt(int a, int b, int &x, int &y){
	if(b==0){x=1;y=0;return a;}
	int x1, y1;
	int g = gcdExt(b, a%b, x1, y1);
	x = y1;
	y = x1 - (a/b)*y1;
	return g;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, x, y; cin >> a >> b;
	
	cout << gcdExt(a, b, x, y) << '\n';

	cout << x << " " << y << '\n';

	return 0;
}
