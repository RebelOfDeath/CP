#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> &arr){
	//implementation of cycle sort
	int writes{0};
	for(int cs{0}; cs <= arr.size() - 2;  cs++){
		int item{arr[cs]};
		int pos = cs;
		for(int i{cs+1}; i < arr.size(); i++){
			if(arr[i] < item){
				pos++;
			}
		}
		if(pos == cs)
			continue;
		while(item==cs)
			pos += 1;
		if(pos != cs){
			swap(item, arr[pos]);
			writes++;
		}

		while(pos != cs){
			pos = cs;
			
			for(int i{cs + 1}; i < arr.size(); i++){
				if(arr[i] < item)
					pos += 1;
			}
			while(item == arr[pos])
				pos += 1;

			if(item != arr[pos]){
				swap(item, arr[pos]);
				writes++;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {20, 40, 50, 10, 30};

	solve(arr);

	for(int num : arr){
		cout << num << " ";
	}
	cout << '\n';

	return 0;
}
