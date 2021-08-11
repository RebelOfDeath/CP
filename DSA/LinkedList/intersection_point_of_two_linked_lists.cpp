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
		cout << temp->data << '\n';
		temp = temp->next;
	}
	cout << '\n';
}

void insert(Node *&root, int value){
	Node *temp = new Node(value);
	temp->next = root;
	root = temp;
}

Node* create_list_from_vector(vector<int> &nums){
	Node *head = NULL;
	for(size_t i{nums.size() - 1}; i >= 0; i--){
		insert(head, nums[i]);
	}
	return head;
}


int getCount(Node *head){
	Node *temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}


void print_intersection(Node *&head1, Node *&head2){
	//you can also use hashing to do this but that would require extra space
	Node *temp1 = head1;
	Node *temp2 = head2;

	int c1 = getCount(head1);
	int c2 = getCount(head2);
	int diff = abs(c1 - c2);

	if(c1 > c2){
		for(int i{0}; i < diff; i++){
			if(temp1 == NULL){
				cout << "no intersection found\n";
				return;
			}
			temp1 = temp1->next;
		}
	}else{
		for (int i = 0; i < diff; ++i)
		{
			if(temp2 == NULL){
				cout << "no interseciton found\n";
				return;
			}
		}
	}
	while(temp1 != NULL && temp2 != NULL){
		if(temp1 == temp2){
			cout << "found interseciton at node " << temp1->data << "\n";
			return;
		}
		temp1 = temp1->next;
		temp2 = temp2->next;
	}

	cout << "no intersection found\n";
	return;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *head1 = new Node(5);
	Node *one = new Node(8);
	Node *two = new Node(7);
	Node *three = new Node(10);
	Node *four = new Node(12);
	Node *five = new Node(15);
	head1->next = one;
	one->next = two;
	two->next = three;
	three->next = four;
	four->next = five;


	Node *head2 = new Node(9);
	head2->next = three;



	//find the intersection of the two linked lists
	print_intersection(head1, head2);


	return 0;
}