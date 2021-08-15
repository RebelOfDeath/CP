#include<bits/stdc++.h>

using namespace std;


struct Node
{
	int key;
	Node *left, *right;
	Node(int k){
		key = k;
		left = right = NULL;
	}
};


int max_of_bin_tree(Node *root){
	if(root == NULL){
		return INT_MIN;
	}else{
		return max(root->key, max(max_of_bin_tree(root->left), max_of_bin_tree(root->right)));
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(80);
	root->left = new Node(30);
	root->left->left = new Node(90);
	root->right = new Node(40);
	root->right->right = new Node(100);
	root->right->right->left = new Node(60);


	cout << max_of_bin_tree(root) << '\n';
	
	return 0;
}