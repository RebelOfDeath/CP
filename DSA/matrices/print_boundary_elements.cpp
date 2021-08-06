#include<bits/stdc++.h>

using namespace std;

void solve(vector<vector<int>> &arr){
	int i{0}, j{1};
	for(i; i < arr[0].size(); i++){
		cout << arr[0][i] << " ";
	}
	i--;
	for(j; j < arr.size(); j++){
		cout << arr[j][i] << " ";
	}
	j--;i--;
	for(i; i >= 0; i--){
		cout << arr[j][i] << " ";
	}j--;
	for(j; j >= 1; j--){
		cout << arr[j][0] << " ";
	}
	cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<vector<int>> arr {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

	solve(arr);

	return 0;
}

