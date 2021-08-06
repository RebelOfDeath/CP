#include<bits/stdc++.h>

using namespace std;

int EucledianExt(int a, int b, int &x, int &y){
	if(b==0){
		x = 1; y =0;
		return a;
	}
	int x1, y1;
	int g = EucledianExt(b, a%b, x1, y1);
	x = y1;
	y = x1 - (a/b)* y1;
	return g;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, m; cin >> a >> m;

	int x0, y0;
	int ans = EucledianExt(a, m, x0, y0);
	if(ans != 1)
		cout << "Does not exist\n";
	else{
		if(x0 < 0)
			cout << x0 + m << '\n';
		else
			cout << x0 << '\n';
	}

	return 0;
}
