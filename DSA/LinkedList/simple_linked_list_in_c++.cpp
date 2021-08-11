#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}
};

void recursive_traversal(Node *temp){
	if(temp == NULL)
		return;
	else{
		cout << temp -> data << " ";
		return recursive_traversal(temp->next);
	}
}

void insert_at_head(Node *&head, int value){
	Node *temp = new Node(value);
	temp -> next = head;
	head = temp;
	cout << "inserted " << value << " at the begin of the linked list\n";
}


void insert_end(Node *&head, int value){
	Node *temp = new Node(value);
	if(head == NULL){
		head = temp;
	}
	Node *i{head};
	while(i->next != NULL){
		i = i->next;
	}
	i->next = temp;
	cout << "inserted " << value << " at the end of the linked list\n";
}


void delete_first(Node *&head){
	if(head == NULL){
		return;
	}
	Node *temp = head;
	head = head->next;
	cout << "deleted " << temp -> data << " from the begining of the list\n";
	delete temp;
}


void delete_last(Node *&head){
	if(head == NULL)
		return;
	else if(head->next == NULL){
		delete head;
		head = NULL;
	}
	else{
		Node *i{head}, *j{head->next};
		while(j->next != NULL){
			i = j;
			j = j-> next;
		}
		i->next = NULL;
		cout << "deleted " << j -> data << " from the end of the list\n";
		delete j;
	}
}


void insert_at(Node *&head, int value, int pos){
	Node *temp = new Node(value);
	if(pos == 1){
		temp -> next = head;
		head = temp;
		return;
	}
	Node *curr = head;
	for(int i{1}; i <= pos-2 && curr != NULL; i++){
		curr = curr -> next;
	}
	if(curr == NULL)
		return;
	cout << "inserted " << temp -> data << " at position " << pos << '\n';
	temp -> next = curr->next;
	curr-> next = temp;
	return;
}


int search_ll(Node *&head, int key){
	int res {-1};
	Node *temp = head;
	int i{0};
	while(temp->next != NULL){
		i++;
		if(temp->data == key){
			res = i;
			break;
		}
		temp = temp->next;
	}
	return res;

}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//this  creates singly linked list of  length two containing 10, 20 & 30
	Node *head = new Node(10);
	head -> next = new Node(20);
	head -> next -> next = new Node(30);


	//to traverse this linked list you can do  the following
	Node *temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << '\n';

	
	//you can traverse the linked list recursively as well
	temp = head;
	recursive_traversal(temp);
	cout << '\n';



	//to insert at the beginning you can use the following function
	int value = 0;
	insert_at_head(head, value);
	temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp-> next;
	}
	cout << '\n';



	//to insert at the end of a singly linked list you can use the following function
	value = 40;
	insert_end(head, value);
	temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << '\n';


	//delete first node of singly linked list
	delete_first(head);
	temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << '\n';



	//to delete the last node of the singly linekd list you can use the following function
	delete_last(head);
	temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << '\n';


	//to insert a node in a given position in the list you can use the following funciton
	value = 25;
	insert_at(head, value, 3);
	temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << '\n';



	//to search a linked list you can use the following
	int key = 25;
	cout << search_ll(head, key) << '\n';



	return 0;
}
