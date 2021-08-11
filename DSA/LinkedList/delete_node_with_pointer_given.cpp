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

void remove_node(Node *node){
	if(node == NULL)
		return;
	if(node->next == NULL){
		delete node;
		return;
	}
	Node *temp = node->next;
	node->data = temp->data;
	node->next = temp->next;
	delete temp;

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

	//detect a loop in the linked list using floyd loop detection algorithm
	print_list(head);


	//remove a node with given pointer
	remove_node(three);
	print_list(head);

	return 0;
}