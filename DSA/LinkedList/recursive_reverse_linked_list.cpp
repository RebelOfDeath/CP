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

Node* reverse_list(Node *head){
	if(head->next == NULL || head == NULL)
		return head;
	Node *rest_head = reverse_list(head->next);
	Node *rest_tail = head->next;
	rest_tail->next = head;
	head->next = NULL;
	return rest_head;
}


Node* reverse_list_2(Node *curr, Node *prev){
	if(curr==NULL)
		return prev;
	Node *next = curr->next;
	curr->next = prev;
	return reverse_list_2(next,curr);
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
	head = reverse_list(head);
	print_list(head);


	//revese recursively with method 2
	head = reverse_list_2(head, NULL);
	print_list(head);



	return 0;
}