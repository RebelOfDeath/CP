#include<bits/stdc++.h>

using namespace std;

bool ispair(vector<int> &arr, int sum){
	unordered_set<int> s;
	for(int x : arr){
		if(s.find(x) != s.end())
			return true;
		else
			s.insert(x);
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> arr {2, 1, 6, 3};
	int sum {6};

	cout << std::boolalpha << ispair(arr, sum) << '\n';

	return 0;
}
