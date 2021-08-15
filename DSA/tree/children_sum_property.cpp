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


bool check_children_sum(Node *root){
	if(root == NULL)
		return true;
	if(root->left == NULL && root->right == NULL)
		return true;
	int sum = 0;
	if(root->left != NULL){
		sum += root->left->key;
	}
	if(root->right != NULL){
		sum += root->right->key;
	}
	return (root->key == sum && check_children_sum(root->left) && check_children_sum(root->right));
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(20);
	root->left = new Node(8);
	root->left->left = new Node(3);
	root->left->right = new Node(5);
	root->right = new Node(12);


	cout << std::boolalpha << check_children_sum(root) << '\n';

	return 0;
}