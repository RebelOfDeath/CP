//the problem is that we are given three different types of elemenets that we have to sort
//this is a variation of the problem of sorting two types of elements in an array
//for this question we will be implementing the extended version of hoares's algorithm
//also known as the dutch national flag algorithm


#include<bits/stdc++.h>

using namespace std;


void solve(vector<int> &arr){
	size_t lo{0}, mid{0}, hi{arr.size() - 1};
	while(mid <= hi){
		if(arr[mid] == 0){
			swap(arr[lo], arr[mid]);
			lo++;
			mid++;
		}else if(arr[mid] == 1){
			mid++;
		}else{
			swap(arr[mid], arr[hi]);
			hi--;
		}
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {0, 1, 2, 1, 1, 2,};
	solve(arr);	
	for(int num : arr){
		cout << num << " ";
	}
	cout << '\n';
		
	return 0;
}
