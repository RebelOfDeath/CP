#include<bits/stdc++.h>

using namespace std;


struct two_stacks
{
	int *arr, cap, top1, top2;
	two_stacks(int n){
		cap = n;
		top1 = -1;
		top2 = cap;
		arr = new int[n];
	}
	void push1(int x){
		if(top1 < top2-1){
			top1++;
			arr[top1] = x;
		}
	}

	void push2(int x){
		if(top1 < top2-1){
			top2--;
			arr[top2] = x;
		}
	}

	int pop1(){
		if(top1>=0){
			int x = arr[top1];
			top1--;
			return x;
		}
		else{
			return INT_MIN;
		}
	}

	int pop2(){
		if(top2<cap){
			int x = arr[top2];
			top2++;
			return x;
		}else{
			return INT_MIN;
		}
	}


};


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	two_stacks ts(5);
	ts.push1(5);
	ts.push2(10);
	ts.push1(11);
	ts.push2(15);
	ts.push2(7);

	

	return 0;
}