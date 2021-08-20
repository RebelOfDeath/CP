#include<bits/stdc++.h>

using namespace std;

void sort_k_sorted(vector<int> &arr, int k){
	priority_queue<int, vector<int>, greater<int>> pq;

	for(int i=0;i<=k;i++)
        pq.push(arr[i]);
        
	int index = 0; 
	for (int i = k + 1; i < arr.size(); i++) { 
		arr[index++] = pq.top(); 
		pq.pop(); 
		pq.push(arr[i]); 
	} 

	while (pq.empty() == false) { 
		arr[index++] = pq.top(); 
		pq.pop(); 
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// a k-sorted array is defined as an array which with given k an element at index i will be 
	// present in the original array between the indexes i - k and i + k 

	vector<int> arr {10, 9, 7, 8, 70, 50, 60};

	sort_k_sorted(arr, 2);

	for(auto x : arr){
		cout << x << " ";
	}
	cout << '\n';

	return 0;
}