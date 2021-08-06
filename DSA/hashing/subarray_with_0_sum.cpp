#include<bits/stdc++.h>

using namespace std;

bool sum_zero(vector<int> &arr){
	unordered_set<int> s;
	int pref_sum{0};
	s.insert(0);
	for(auto  x : arr){
		pref_sum += x;
		if(s.find(pref_sum) != s.end()){
			return  true;
		}		
		s.insert(pref_sum);
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> a1 {1, 4, 13, -3, -10, 5};
	vector<int> a2 {-1, 4, -3, 5, 1};

	cout << std::boolalpha << sum_zero(a1) << '\n' << sum_zero(a2) << '\n';

	return 0;
}
