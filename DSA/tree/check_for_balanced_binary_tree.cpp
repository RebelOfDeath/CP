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


int check_balanced(Node *root){
	if(root == NULL){
		return 0;
	}
	int lh = check_balanced(root->left);
	if(lh==-1){
		return -1;
	}
	int rh = check_balanced(root->right);
	if(rh==-1){
		return -1;
	}
	if(abs(lh-rh) > 1){
		return -1;
	}else{
		return max(lh, rh) + 1;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(20);
	root->left = new Node(8);
	root->left->left = new Node(3);
	root->left->right = new Node(5);
	root->right = new Node(12);


	(check_balanced(root) > 0) ? cout << "Balanced\n" : cout << "Not balanced\n"; 


	return 0;
}