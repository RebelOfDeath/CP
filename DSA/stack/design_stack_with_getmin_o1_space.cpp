#include<bits/stdc++.h>

using namespace std;

struct stack_with_o1_getmin
{
	stack<int> s;
	int min = INT_MIN;
	stack_with_o1_getmin(){}
	void push(int x){
		if(s.empty()){
			min = x;
			s.push(x);
		}else if(x <= min){
			s.push(2*x - min);
			min = x;
		}else{
			s.push(x);
		}
	}
	int pop(){
		int  t = s.top(); s.pop();
		if(t < min){
			int res = min;
			min = 2 * min - 1;
			return res;
		}else{
			return t;
		}
	}
	int top(){
		int t = s.top();
		return (t<=min) ? min : t;
	}
	int getmin(){
		return min;
	}

};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	stack_with_o1_getmin s;
	s.push(5);
	s.push(10);
	s.push(20);
	s.push(2);
	s.push(6);
	s.push(4);
	s.pop();
	s.pop();
	s.push(2);
	s.pop();
	s.push(1);
	s.pop();
	s.pop();


	return 0;
}