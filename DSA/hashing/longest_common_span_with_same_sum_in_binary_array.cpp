#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &a1, vector<int> &a2){
	vector<int>  temp;
	for(int i{0}; i < a1.size(); i++){
		temp.push_back(a1[i] - a2[i]);
	}
	
	unordered_map<int, int> m;
	m[0] = -1;
	int res{0}, sum{0};
	for(int i{0}; i < temp.size(); i++){
		if(temp[i] == 0){
			sum--;
		}else{
			sum++;
		}

		if(m.find(sum) != m.end()){
			res = max(res, i - m[sum]);
		}else{
			m[sum] = i;
		}
	}
	return res;

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr1 {0, 1, 0, 1, 1, 1, 1};
	vector<int> arr2 {1, 1, 1, 1, 1, 0, 1};

	cout << solve(arr1, arr2) << '\n'; 

	return 0;
}
