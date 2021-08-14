#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//to create a deque ds in c++ you can use
	//this data structure allows you to have random access to the  data members in it
	deque<int> dq {10, 20, 30};

	/*
		the functions that can be used on deques are:
		-----------------------------------------------

		push_front()
		push_back()
		pop_front()
		pop_back()
		front()
		back()
		clear()
		erase()
		empty()
		.at and [] operator
		swap()
		begin()
		end()
	*/


	dq.push_front(5);
	dq.push_back(50);
	for(auto x : dq){
		cout << x << " ";
	}
	cout << '\n';

	cout << dq.front() << " " << dq.back() << '\n';



	dq.clear();
	dq = {10, 15, 30, 5, 12};
	auto it = dq.begin();
	it++;
	dq.insert(it, 20); // inserts the value 20 before the iterator;
	dq.pop_front();
	dq.pop_back();
	cout << dq.size() << '\n';






	return 0;
}