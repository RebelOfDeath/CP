#include<bits/stdc++.h>

using namespace std;

struct QNode{

	int data;
	QNode *next;
	QNode(int d){
		data = d;
		next = NULL;
	}

};

struct Queue
{
	QNode *front, *rear;
	Queue(){
		front = rear = NULL;
	}
	void enqueue(int x){
		QNode *temp = new QNode(x);
		if(rear == NULL){
			front = rear = temp;
			return;
		}
		rear->next = temp;
		rear = temp;
	}

	void dequeue(){
		if(front == NULL){
			return;
		}
		QNode *temp = front;
		front = front->next;
		if(front == NULL){
			rear = NULL;
		}
		delete (temp);
	}

};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.dequeue();
	q.dequeue();
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.dequeue();
	cout << "Queue  Front : " << (q.front)->data << '\n';
	cout << "Queue Rear : " << (q.rear)->data << '\n';

	

	return 0;
}