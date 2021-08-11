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
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << '\n';
}


void remove_duplicates(Node *&head){
	Node *temp = head;
	if(head == NULL)
		return;
	if(head -> next == NULL)
		return;
	while(temp->next != NULL){
		if(temp->next->data == temp->data){
			Node *to_delete = temp->next;
			temp->next = to_delete->next;
			delete to_delete;
			continue;
		}
		temp = temp->next;
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	Node *head = new Node(10);
	Node *one = new Node(20);
	Node *two = new Node(20);
	Node *three = new Node(30);
	Node *four = new Node(30);
	head->next = one;
	one->next = two;
	two->next = three;
	three->next = four;


	//removing duplicates
	remove_duplicates(head);
	print_list(head);



	return 0;
}
