#include<bits/stdc++.h>

using namespace std;

void solve(vector<bool> &arr){
	for(int i{1}; i < arr.size(); i++){
		if(arr[i] != arr[i-1]){
			if(arr[i] != arr[0])
				cout << "From " << i << " to ";
			else
				cout << (i-1) << endl;
		}
	}
	if(arr[arr.size()-1] != arr[0])
		cout << (arr.size()-1) << '\n';	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		
	vector<bool> arr {1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1};
	solve(arr);
	

	return 0;
}
