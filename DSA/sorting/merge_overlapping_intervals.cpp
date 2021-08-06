#include<bits/stdc++.h>

using namespace std;


void solve(vector<pair<int, int>> &arr){
	sort(arr.begin(), arr.end());
	size_t n{arr.size()};
	for(int i{1}; i < n; i++){
		if(arr[i].first <= arr[i-1].second){
			if(arr[i-1].second < arr[i].second)
				arr[i-1].second = arr[i].second;
			arr.erase(arr.begin() + i);
			i--;n--;

		}
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<pair<int, int>> arr {{7, 9}, {6, 10}, {4, 5}, {1, 3}, {2, 4}};

	solve(arr);

	for(auto p : arr){
		cout << "from " << p.first << " to " << p.second << '\n';
	}

	return 0;
}
