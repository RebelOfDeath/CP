#include <bits/stdc++.h>

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

void reverse_list(Node *&head){
	Node *curr = head;
	Node *prev = NULL;
	while(curr != NULL){
		Node *next = curr -> next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
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


	//reverse the linked list
	reverse_list(head);
	print_list(head);



	return 0;
}