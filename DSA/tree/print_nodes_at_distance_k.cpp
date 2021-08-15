#include<bits/stdc++.h>

using namespace std;

struct Node{

	int key;
	Node *left, *right;
	Node(int k){
		key = k;
		left = right = NULL;
	}

};


void print_at_distance_k(Node *root, int k){
	if(root == NULL)
		return;	
	else{
		if(k==0){
			cout << root->key << " ";
			return;
		}else{
			int next = k-1;
			print_at_distance_k(root->left, next);
			print_at_distance_k(root->right, next);
			return;
		}
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	root->left->right = new Node(50);
	root->right->right = new Node(70);


	print_at_distance_k(root, 2);
	cout << '\n';


	return 0;
}