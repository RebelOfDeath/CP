#include<bits/stdc++.h>

using namespace std;

void solve(vector<vector<int>> &arr, int x){
	size_t i{0}, j{arr[i].size() - 1};
	while(i < arr.size() && j >= 0){
		if(x < arr[i][j]){
			j--;
		}else if(x > arr[i][j]){
			i++;
		}else if(x == arr[i][j]){
			cout << "found " << x << " at ("<< i << ", " << j << ")\n";
			return;
		}
	}
	cout << "NOT FOUND\n"; 
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<vector<int>> arr {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};

	solve(arr, 29);

	return 0;
}
