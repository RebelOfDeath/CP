#include<bits/stdc++.h>

using namespace std;

int max_items_with_sum(vector<int> &arr, int sum){
	priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());

	int count{0};
	while(pq.top() <= sum){
		sum -= pq.top();
		pq.pop();
		count++;
	}
	return count;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {20, 10, 5, 30, 100};
	cout << max_items_with_sum(arr, 35) << '\n';	

	return 0;
}