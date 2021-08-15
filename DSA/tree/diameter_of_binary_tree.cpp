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

int res = 0;
int diameter_bin_tree(Node *root){
	if(root == NULL){
		return 0;
	}else{
		int left = diameter_bin_tree(root->left);
		int right = diameter_bin_tree(root->right);
		res = max(res, 1 + left + right);
		return 1 + max(left, right);
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(60);
	root->left->left = new Node(30);
	root->left->right = new Node(80);
	root->left->left->left = new Node(40);
	root->left->left->right = new Node(50);
	root->left->left->left->left = new Node(60);
	root->left->right->right = new Node(90);
	root->left->right->right->right = new Node(18);


	diameter_bin_tree(root);
	cout  << res << '\n';



	return 0;
}