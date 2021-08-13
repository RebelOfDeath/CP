#include<bits/stdc++.h>

using namespace std;

struct Queue{
	//this implementation uses a circular array as a queue
	int *arr;
	int front, cap, size;
	Queue(int x){
		arr = new int[x];
		cap = x;
		front = 0;
		size = 0;
	}

	bool isFull(){
		return (cap == size);
	}
	bool isEmpty(){
		return (size == 0);
	}
	int getFront(){
		if(isEmpty()){
			return -1;
		}else{
			return front;
		}
	}
	int getRear(){
		if(isEmpty()){
			return -1;
		}else{
			return (front + size - 1) % cap;
		}
	}

	void enqueue(int x){
		if(isFull()){
			return;
		}
		int rear = getRear();
		rear = (rear + 1) % cap;
		arr[rear] = x;
		size++;
	}

	void dequeue(){
		if(isEmpty()){
			return;
		}
		front = (front+1) % cap;
		size--;
	}

};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Queue q = Queue(3);
	q.enqueue(10);	
	q.enqueue(20);	
	q.enqueue(30);	
	q.dequeue();
	q.dequeue();
	q.enqueue(40);
	q.dequeue();

	return 0;
}