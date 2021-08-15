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

void inorder_traversal(Node *root){
	if(root == NULL)
		return;
	inorder_traversal(root->left);
	cout << root->key << " ";
	inorder_traversal(root->right);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->right->right = new Node(50);
	root->right->left = new Node(40);	


	inorder_traversal(root);
	cout  << '\n';
	



	return 0;
}