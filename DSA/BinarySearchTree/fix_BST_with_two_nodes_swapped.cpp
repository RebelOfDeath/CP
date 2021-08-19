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
	else{
		inorder_traversal(root->left);
		cout << root->key << " ";
		inorder_traversal(root->right);
	}
}

Node *prevv=NULL,  *first = NULL, *second = NULL;
void fix(Node *root){
	if(root == NULL)
		return;
	fix(root->left);
	if(prevv != NULL && root->key < prevv->key){
		if(first==NULL)
			first = prevv;
		second = root;
	}
	prevv = root;
	fix(root->right);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(20);
	root->left = new Node(60);
	root->left->left = new Node(4);
	root->left->right = new Node(10);
	root->right = new Node(80);
	root->right->left = new Node(8);
	root->right->right = new Node(100);
	
	inorder_traversal(root);cout << '\n';
	fix(root);swap(first->key, second->key);
	inorder_traversal(root);cout << '\n';	

	return 0;
}