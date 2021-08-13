#include<bits/stdc++.h>

using namespace std;

struct Stack
{
	queue<int> q1, q2;

	int top(){
		return q1.front();
	}

	int size(){
		return q1.size();
	}

	int pop(){
		int x = q1.front()
		q1.pop()
		return x;
	}

	void push(int x){
		while(q1.empty() == false){
			q2.push(q1.top());
			q1.pop();
		}
		q1.push(x);
		while(q1.empty() == false){
			q1.push(q1.top());
			q2.pop();
		}
	}

};


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//more variations of this questions are

	/*
		1. implement stack using only queue by making pop operation costly

		2. implement stack using only one queue (using recursion)

		3. implement queue using stack
	*/
	


	return 0;
}