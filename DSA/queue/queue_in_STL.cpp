#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//you can create a queue in c++ using the stl queue data structure
	queue<int> q;


	//the main funtions available for queues in the stl are
	/*
		push() is the same as enque adds an item to the end of the queue
		pop() is the same as deque, removes an item from the head of the queue
		front() returns the first element in the queue
		back() retunrs the latest elemetn in the queue
		empty() returns a bool value for the emptyness of the queue
		size() return the size of the queue
	*/
	q.push(10);
	q.push(20);
	q.push(30);

	cout << "there are now " << q.size() << "elements in the queue\n";
	cout << q.front() << " " << q.back() << '\n';
	q.pop();
	cout << q.front() << " " << q.back() << '\n';





	return 0;
}