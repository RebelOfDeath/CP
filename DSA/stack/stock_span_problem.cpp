#include<bits/stdc++.h>

using namespace std;

vector<int> stock_span(vector<int> prices){
	//this implementation is based on the observations that

	//span = (index of curr element) - ( index of closest greatest elemetn on left side)

	//when you see a number that is greater than the last seen high you will not need the other one again so you pop it ans push the new one

	stack<int> s;
	s.push(0);
	vector<int> span;
	span.push_back(1);

	for(int i{1}; i < prices.size(); i++){
		while(s.empty() == false && prices[s.top()] <= prices[i]){
			s.pop();
		}
		span.push_back(s.empty() ? i+1 : i-s.top());
		s.push(i);
	}
	return span;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> prices {13, 15, 12, 14, 16, 8, 6, 4, 10, 30};
	for(int x : prices){
		cout << x << " ";
	}
	cout << '\n';
	vector<int> span = stock_span(prices);
	for(int x : span){
		cout << x << " ";
	}
	cout << '\n';



	return 0;
}