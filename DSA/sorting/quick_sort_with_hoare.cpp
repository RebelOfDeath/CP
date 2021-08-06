#include<bits/stdc++.h>

using namespace std;

int partition(vector<int> &arr, int l, int h){
	int p = arr[l];//here we assume that the pivot element is always the first element
	int i{l-1}, j{h+1};
	while(true){
		do{
			i++;
		}while(arr[i] < p);
		do{
			j--;
		}while(arr[j] > p);
		if(i >= j) return j;
		swap(arr[i], arr[j]);
	}
}

void solve(vector<int> &arr, int l, int h){
	if(l < h){
		int p = partition(arr, l, h);
		solve(arr, l, p);
		solve(arr, p+1, h);
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {5, 3, 8, 4, 2, 7, 1, 10};

	solve(arr, 0, 7);

	for(int num: arr){
		cout << num << " ";
	}
	cout << '\n';
	
	return 0;
}

