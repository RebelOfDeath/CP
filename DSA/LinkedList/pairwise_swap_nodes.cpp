#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int d){
		data = d;
		next = NULL;
	}
};

void print_list(Node *head){
	Node *temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << '\n';
}

void piarwise_swap(Node *&head){
	if(head==NULL || head->next==NULL)
		return;
	Node *curr = head->next->next;
	Node *prev = head;
	head = head->next;
	head->next = prev;
	while(curr!=NULL && curr->next != NULL){
		prev->next=curr->next;
		prev=curr;
		Node *next = curr->next->next;
		curr->next->next=curr;
		curr=next;
	}
	prev->next = curr;
	return;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *head = new Node(1);
	Node *two = new Node(2);
	head->next = two;
	Node *three = new Node(3);
	two->next = three;
	Node *four = new Node(4);
	three->next = four;
	Node *five = new Node(5);
	four->next = five;

	print_list(head);
	piarwise_swap(head);
	print_list(head);



	return 0;
}