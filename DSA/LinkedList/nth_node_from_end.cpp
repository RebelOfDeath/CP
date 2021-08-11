#include<bits/stdc++.h>

using namespace std;

struct Node{

	Node *next; 
	int data;
	Node(int d){
		data = d;
		next = NULL;
	}

};

void print_list(Node *&head){
	Node *temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << '\n';
}


int nth_node(Node *&head, int n){
	Node *first = head;
	if(head == NULL)
		return 0;	
	for(int i{0}; i < n; i++){
		if(first==NULL) return 0;
		first = first->next;
	}
	Node *second = head;
	while(first!= NULL){
		second = second->next;
		first = first->next;
	}
	return second->data;
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *head = new Node(10);
	Node *one = new Node(20);
	Node *two = new Node(30);
	Node *three = new Node(40);
	Node *four = new Node(50);
	head->next = one;
	one->next = two;
	two->next = three;
	three->next = four;

	print_list(head);

	cout << nth_node(head, 2) << '\n';

	return 0;
}