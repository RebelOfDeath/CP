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


void sorted_insert(Node *&head, int value){
	Node *temp = new Node(value);
	if(head == NULL)
		head = temp;
	if(value < head->data){
		temp -> next = head;
		head = temp;
	}	
	Node *curr = head;
	while(curr->next != NULL && curr->next->data < value){
		curr = curr->next;
	}
	temp->next = curr->next;
	curr->next = temp;
	return;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *head = new Node(10);
	Node *one = new Node(20);
	Node *two = new Node(30);
	Node *three = new Node(40);
	head->next = one;
	one->next = two;
	two->next = three;

	print_list(head);

	//inserting into a sorted linked list
	sorted_insert(head, 50);
	print_list(head);


	return 0;
}