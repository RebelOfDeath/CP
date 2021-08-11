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

void detect_and_remove_loop(Node *head){
	Node *slow{head}, *fast{head};
	while(fast!=NULL && fast->next!=NULL){
		slow = slow->next;
		fast = fast->next->next;
		if(slow==fast)
			break;
	}
	if(slow != fast)
		return;
	fast = head;
	while(fast->next!=slow->next){
		fast = fast->next;
		slow = slow->next;
	}
	slow->next = NULL;
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
	detect_and_remove_loop(head);
	print_list(head);

	return 0;
}