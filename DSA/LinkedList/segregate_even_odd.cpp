#include<bits/stdc++.h>

using namespace std;

struct Node
{
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


void segregaet_even_odd(Node *&head){
	Node *even_head = NULL;
	Node *odd_head = NULL;
	Node *even_temp = NULL;
	Node *odd_temp = NULL;
	Node *temp = head;
	for(temp; temp != NULL; temp = temp->next){
		if(temp->data%2==0){
			if(even_head == NULL){
				even_head = temp;
				even_temp = even_head;
			}
			else{
				even_temp->next = temp;
				even_temp = even_temp->next;
			}

		}else{
			if(odd_head == NULL){
				odd_head = temp;
				odd_temp = odd_head;
			}else{
				odd_temp->next = temp;
				odd_temp = odd_temp->next;
			}
		}
	}
	if(even_head==NULL || odd_head==NULL)
		return;
	even_temp->next = odd_head;
	odd_temp->next = NULL;
	head = even_head;
	return;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	Node *head = new Node(17);
	Node *one = new Node(15);
	Node *two = new Node(8);
	Node *three = new Node(12);
	Node *four = new Node(10);
	Node *five = new Node(5);
	Node *six = new Node(4);
	head->next = one;
	one->next = two;
	two->next = three;
	three->next = four;
	four->next = five;
	five->next = six;

	//segregate odds and evens
	print_list(head);
	segregaet_even_odd(head);
	print_list(head);


	return 0;
}