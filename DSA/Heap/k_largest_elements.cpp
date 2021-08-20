#include<bits/stdc++.h>

using namespace std;

void print_k_largest_elements(vector<int> &arr, int k){
	priority_queue<int> pq (arr.begin(), arr.end());

	for(int i{0}; i < k; i++){
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {8, 6, 4, 10, 9};
	print_k_largest_elements(arr, 3);

	return 0;
}