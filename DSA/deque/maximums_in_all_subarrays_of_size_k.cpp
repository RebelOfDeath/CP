#include<bits/stdc++.h>

using namespace std;

void max_sub_k(vector<int> &arr, int n, int k){
	deque<int> dq;
	for(int i{0}; i < k; i++){
		while(!dq.empty() && arr[i] >= arr[dq.back()]){
			dq.pop_back();
		}
		dq.push_back(i);
	}

	for(int i {k}; i < n; i++){
		cout  << arr[dq.front()] << " ";

		while((!dq.empty()) && dq.front() <= i -k){
			dq.pop_front();
		}

		while((!dq.empty()) && arr[i] >= arr[dq.back()]){
			dq.pop_back();
		}

		dq.push_back(i);


	}

	cout << arr[dq.front()];
	cout << '\n';

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> nums {10, 8, 5, 12, 15, 7, 6};

	max_sub_k(nums, 7, 3);

	return 0;
}