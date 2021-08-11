#include<bits/stdc++.h>

using namespace std;

struct Node{

	int data;
	Node *prev;
	Node *next;
	Node(int d){
		data = d;
		prev = NULL;
		next = NULL;
	}

};

void print_list(Node *head){
	Node *temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}

	cout << '\n';
}

void insert_begin(Node *&head, int value){
	Node *temp = new Node(value);
	temp -> next = head;
	if(head != NULL)
		head -> prev = temp;
	head = temp;
}

void insert_end(Node *&head, Node *&tail, int value){
	Node *temp = new Node(value);
	if(head == NULL){
		head = temp;
		tail = temp;
		return;
	}
	tail -> next = temp;
	temp -> prev = tail;
	tail = temp;
}

void reverse_list(Node *&head, Node *&tail){
	if(head == NULL || head -> next == NULL)
		return;
	Node *prev = NULL, *curr = head;
	tail = curr;
	while(curr != NULL){
		prev = curr->prev;
		curr->prev = curr->next;
		curr->next = prev;
		curr = curr -> prev;
	}
	head = prev -> prev;
}


void delete_head(Node *&head){
	if(head == NULL)
		return;
	if(head -> next == NULL){
		delete head;
		head = NULL;
	}
	Node *temp = head;
	head = head -> next;
	head -> prev = NULL;
	delete temp;
}


void delete_last(Node *&tail){
	if(tail == NULL)
		return;
	if(tail -> prev == NULL){
		delete tail;
		tail = NULL;
	}
	Node *temp = tail;
	tail = tail -> prev;
	tail -> next = NULL;
	delete temp;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *tail = new Node(30);
	head -> next = temp1;
	temp1 -> prev = head;
	temp1 -> next = tail;
	tail -> prev = temp1;


	print_list(head);


	//insert at begin of doubly linked list
	insert_begin(head, 5);
	print_list(head);


	//insert at end of doubly linked list
	insert_end(head, tail, 40);
	print_list(head);


	//reversing double linked list
	reverse_list(head, tail);
	print_list(head);
	reverse_list(head, tail);
	print_list(head);


	//deleting first and last node
	delete_head(head);
	print_list(head);
	delete_last(tail);
	print_list(head);





	return 0;
}