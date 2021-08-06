#include<bits/stdc++.h>

using namespace std;

int countAndMerge(vector<int> &arr, int l, int m, int r){
	int n1 = m-l+1, n2 = r - m;
	int left[n1], right[n2];
	for(int i{0}; i < n1; i++){
		left[i] = arr[l+i];
	}
	for(int j{0}; j < n2; j++){
		right[j] = arr[m+1+j];
	}

	int res = 0, i = 0, j = 0, k = l;

	while(i < n1 && j < n2){
		if(left[i] <= right[j]){
			arr[k] = left[i];
			i++;
		}else{
			arr[k] = right[j];
			j++;
			res = res + (n1-j);
		}
		k++;
	}
	while(i < n1){
		arr[k] = left[i];
		i++;
		k++;
	}
	while(j < n2){
		arr[k] = right[j];
		j++;
		k++;
	}
	return res;
}


int countInv(vector<int> &arr, int l, int r){
	int res{0};
	if(l < r){
		int m = l + ((r-l)/2);
		res += countInv(arr, l, m);
		res += countInv(arr, m+1, r);
		res += countAndMerge(arr, l, m, r);
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {468, 335, 1, 170, 225, 479, 359, 463, 465, 206, 146, 282, 328, 462, 492, 496, 443, 328, 437, 392, 105, 403, 154, 293, 383, 422, 217, 219, 396, 448, 227, 272, 39, 370, 413, 168, 300, 36, 395, 204, 312, 323};

	cout << countInv(arr, 0, arr.size() - 1) << '\n';

	return 0;
}
