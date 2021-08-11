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

void has_loop(Node *head){
	if(head == NULL || head->next == NULL){
		cout << "doesn't have loop\n";
		return;
	}
	Node *slow{head}, *fast{head};
	while(fast!=NULL || fast->next!=NULL){
		fast = fast->next->next;
		slow = slow->next;
		if(slow == fast){
			cout << "has loop\n";
			return;
		}
	}
	cout << "doesn't have loop\n";
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
	four->next = one;


	//detect a loop in the linked list using floyd loop detection algorithm
	has_loop(head);

	return 0;
}