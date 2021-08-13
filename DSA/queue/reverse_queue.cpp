#include<bits/stdc++.h>

using namespace std;

void reverse_itter(queue<int> &q){
	stack<int> s;
	while(q.empty() ==false){
		s.push(q.top());
		q.pop();
	}
	while(s.empty() == false){
		q.push(s.top());
		s.pop();
	}
}


void revere_recursive(queue<int> &q){
	if(q.empty())
		return;
	int x = q.top();
	q.pop();
	reverse_recursive(q);
	q.push(x);

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> q;

	return 0;
}