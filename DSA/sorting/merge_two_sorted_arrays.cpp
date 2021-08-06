#include<bits/stdc++.h>

using namespace std;


vector<int> solve(vector<int> &a, vector<int> &b){
	size_t i{0}, j{0};
	vector<int> c;
	while(i < a.size() && j < b.size()){
		if(a[i] <= b[j]){
			c.push_back(a[i]);	
			i++;
		}else{
			c.push_back(b[j]);
			j++;
		}
	}
	while(i < a.size()){
		c.push_back(a[i]);
		i++;
	}
	while(j < b.size()){
		c.push_back(b[i]);
		j++;
	}
	return c;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> a {10, 15, 20};
	vector<int> b {5, 6, 6, 15};

	vector<int> c = solve(a, b);

	for(int num : c){
		cout << num << " ";
	}
	cout << '\n';

	return 0;
}
