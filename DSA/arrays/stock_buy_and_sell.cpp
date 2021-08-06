#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &prices){
	int res{0};
	for(int i{1}; i < n; i++){
		if(prices.at(i) > prices.at(i-1))
			res += (prices.at(i) - prices.at(i-1));
	}
	return res;
	
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> prices {1, 5, 3, 8, 12};
	cout << solve(prices) << '\n';	
    
	return 0;
}
