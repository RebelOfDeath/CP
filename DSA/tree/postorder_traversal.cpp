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

void postorder_traversal(Node *root){
	if(root == NULL){
		return;
	}else{
		postorder_traversal(root->left);
		postorder_traversal(root->right);
		cout << root->key << " ";
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->right->right = new Node(50);
	root->right->left = new Node(40);	


	postorder_traversal(root);
	cout  << '\n';
	



	return 0;
}