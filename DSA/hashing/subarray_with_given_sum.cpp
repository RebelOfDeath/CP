#include<bits/stdc++.h>

using namespace std;

bool has_sub_with_sum(vector<int> &arr, int sum){
	
	unordered_set<int> s;
	int pref_sum{0};
	for(auto x : arr){
		pref_sum += x;
		if(s.find(pref_sum - sum) != s.end()){
			return true;
		}
		s.insert(pref_sum);
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> a1 {5, 8, 6, 13, 3, -1}, a2 {15, 2, 8, 10, -5, -8, 6};
	int sum1{22}, sum2{3};

	cout << std::boolalpha << has_sub_with_sum(a1, sum1) << '\n' << has_sub_with_sum(a2, sum2) << '\n';

	return 0;
}
