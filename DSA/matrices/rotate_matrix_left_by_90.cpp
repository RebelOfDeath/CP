#include<bits/stdc++.h>

using namespace std;

void solve(vector<vector<int>> &arr){
	//the  steps to rotating a matrix by 90 are
	//
	//1-transpose the matrix
	//2-reverse each column in the matrix
	
	for(int i{0}; i < arr.size(); i++){
		for(int j{i+1}; j < arr.size(); j++){
			swap(arr[i][j], arr[j][i]);
		}
	}

	for(int i{0}; i < arr.size(); i++){
		size_t low{0}, high{arr.size() - 1};
		while(low < high){
			swap(arr[low][i], arr[high][i]);
			low++; high--;
		}
	}

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<vector<int>> arr {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

	solve(arr);

	for(auto vec : arr){
		for(auto num : vec){
			cout << num << " ";
		}
		cout << '\n';
	}


	return 0;
}

