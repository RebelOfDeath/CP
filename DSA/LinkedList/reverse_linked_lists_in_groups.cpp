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

void reverse_in_groups(Node *&head, int k){
	Node *curr = head, *prevFirst = NULL;
	bool isFirstPass = true;
	while(curr!=NULL){
		Node *first = curr, *prev = NULL;
		int count{0};
		while(curr != NULL && count < k){
			Node *next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
			count++;
		}
		if(isFirstPass){
			head = prev;
			isFirstPass = false;
		}else{
			prevFirst->next = prev;
		}
		prevFirst = first;
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	Node *head = new Node(10);
	Node *one = new Node(20);
	Node *two = new Node(30);
	Node *three = new Node(30);
	Node *four = new Node(50);
	Node *five = new Node(60);
	head->next = one;
	one->next = two;
	two->next = three;
	three->next = four;
	four->next = five;


	print_list(head);

	//reverse in gorups
	reverse_in_groups(head, 3);
	print_list(head);



	return 0;
}

