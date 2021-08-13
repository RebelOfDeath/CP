#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//to implement stack in c++ you can use the stack data structure from stl
	//in the stl stack is a container adapter (it uses another data structure)
	stack<int> s;


	//some funcitons for stack DS are
	/*
		.push(x) pushes the value x to the stack
		.pop() pops the last entry
		.size() returns the size
		.top() returns the last entry i.e. the first item on top of the stack
		.empty() returns bool for the emptiness status of the stack


		all of these functions have O(1) time complexity

	*/

	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.size() << '\n';
	cout << s.top() << '\n';
	s.pop();
	cout << s.top() << '\n';

	cout << '\n';

	while(s.empty()==false){
		cout << s.top() << " ";
		s.pop();
	}
	cout << '\n';

	return 0;
}