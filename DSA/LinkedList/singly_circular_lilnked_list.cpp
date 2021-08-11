#include<bits/stdc++.h>

using namespace std;


//the node structure of a circular linked list is the same as that of a non cicular linked list
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
	if(temp == NULL)
		return;
	do{
		cout << temp -> data << " ";
		temp = temp -> next;
	}while(temp != head);
	cout << '\n';
}


void insert_begin(Node *&head, Node *&tail, int value){
	Node *temp = new Node(value);
	if(head == NULL){
		head = temp;
		tail = temp;
		temp -> next = temp;
		return;
	}
	tail -> next = temp;
	temp -> next = head;
	head = temp;
}


void insert_end(Node *&head, Node *&tail, int value){
	Node *temp = new Node(value);
	if(tail == NULL){
		temp -> next = temp;
		tail = temp; head = temp;
		return;
	}
	temp -> next = head;
	tail -> next = temp;
	tail = temp;
}


void delete_head(Node *&head, Node *&tail){
	if(head == NULL)
		return;
	else if(head-> next == head){
		delete head;
		head = NULL;
		tail = NULL;
	}else{
		tail -> next = head -> next;
		delete head;
		head = tail -> next;
	}
}


void delete_kth(Node *&head, Node *&tail, int k){
	if(head == NULL)
		return;
	if(k == 1){
		delete_head(head, tail);
		return;
	}
	else{
		Node *temp = head;
		Node *prev = NULL;
		for(int i{0}; i < k-1; i++){
			prev = temp;
			temp = temp -> next;
		}
		if(temp == tail){
			delete tail;
			prev->next = head;
			tail = prev;
			return;
		}
		prev->next = temp -> next;
		delete temp;
	}

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *head = new Node(5);
	Node *temp1 = new Node(10);
	Node *temp2 = new Node(15);
	Node *tail = new Node(20);
	head -> next = temp1;
	temp1 -> next = temp2;
	temp2 -> next = tail;
	tail -> next = head;


	print_list(head);


	//to insert at the beginnign of the circular LL you can do
	insert_begin(head, tail,0);
	print_list(head);


	//to insert at the end of the circular LL you can use
	insert_end(head, tail, 25);
	print_list(head);


	//to delete the head of the circular LL you can use the following
	delete_head(head, tail);
	print_list(head);


	//to delete the kth elemetn of a circuar LL you can use the following
	delete_kth(head, tail, 3);
	print_list(head);

	return 0;
}