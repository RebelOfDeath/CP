#include<bits/stdc++.h>

using namespace std;

void solve(vector<vector<int>> &arr){
	for(int i{0}; i< arr.size(); i++){
		for(int j{0}; j < arr[i].size(); j++){
			if(i%2 == 0){
				cout << arr[i][j] << " "; 
			}else{
				cout << arr[i][arr[i].size() - j - 1] << " ";
			}
		}
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
