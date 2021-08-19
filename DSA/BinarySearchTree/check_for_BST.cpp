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

//this implementation is based on the fact that the inorder traversal of a binary tree should be sorted
bool is_bst(Node *root){
	stack<Node*> s;
	Node *prev = NULL;
	while(!s.empty() || root != NULL){
		while(root!=NULL){
			s.push(root);
			root = root->left;
		}
		root = s.top();
		s.pop();
		if(prev!=NULL && root->key <= prev->key){
			return false;
		}
		prev = root;
		root = root->right;
	}	
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(20);
	root->left = new Node(8);
	root->right = new Node(30);
	root->right->left = new Node(18);
	root->right->right = new Node(35);

	cout << std::boolalpha << is_bst(root) << '\n';

	return 0;
}