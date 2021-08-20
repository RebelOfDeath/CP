#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//to create a priority queue in c++ (by default a max heap) you can use the following syntax
	priority_queue<int> pq;

	//to create a min heap in c++ you can use the following syntax
	priority_queue<int, vector<int>, greater<int>> pq2;

	//we can also create a priority queue using an existing array as well with the following syntax
	vector<int> arr {10, 5, 15};
	priority_queue<int> pq3(arr.begin(), arr.end());

	//to insert elements into the pq you can use the push function
	pq.push(10);
	pq.push(15);
	pq.push(5);

	//to  get the size of the pq you can use .size() function
	cout << pq.size() << '\n';	

	//to print the top element in the pq you can use the top() function
	cout << pq.top() << '\n';

	//you can traverse the pq as shown
	while(pq.empty() == false){
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << '\n';


	/*
		the applications of priority queues are:

			Dijkstra's algorithm

			Prim's algorithm

			Hufman's algorithm

			Heap sort

			and any other place where heap is used
	*/


	return 0;
}