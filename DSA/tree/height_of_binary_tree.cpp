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


int height_bin_tree(Node *root){
	if(root == NULL){
		return 0;
	}else{
		return 1 + max(height_bin_tree(root->left), height_bin_tree(root->right));
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(10);
	root->left = new Node(8);
	root->right = new Node(30);
	root->right->left = new Node(40);
	root->right->right = new Node(50);
	root->right->right->left = new Node(60);


	cout << height_bin_tree(root) << '\n';

	return 0;
}