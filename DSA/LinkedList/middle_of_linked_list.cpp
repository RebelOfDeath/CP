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


int middle_element(Node *&head){
	if(head->next == NULL)
		return head->data;
	if(head == NULL)
		return 0;
	else{
		Node *i{head}, *j{head};
		while(j!=NULL && j->next != NULL){
			i = i->next;
			j = j->next->next;
		}
		return i->data;
	}
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


	//print the middle element of the list
	cout << middle_element(head) << '\n';

	return 0;
}