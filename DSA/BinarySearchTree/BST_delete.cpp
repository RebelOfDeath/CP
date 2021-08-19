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

void line_by_line_traversal(Node *root){
	if(root == NULL){
		return;
	}else{
		queue<Node*> q;
		q.push(root);
		q.push(NULL);
		while(q.size() > 1){
			Node *curr = q.front();
			q.pop();
			if(curr == NULL){
				cout << '\n';
				q.push(NULL);
				continue;
			}
			cout << curr->key << " ";
			if(curr->left != NULL){
				q.push(curr->left);
			}
			if(curr->right != NULL){
				q.push(curr->right);
			}
		}
	}
	cout << "\n\n";
}


/*
	there are three possibilities when deleting a node in a BST

	1- Node to be deleted is a leaf node

	2- Node to be deleted has only one child

	3- Node to be delted has two children
*/

Node *getSuccessor(Node *curr){
	curr = curr->right;
	while(curr!=NULL && curr->left!=NULL){
		curr = curr->left;
	}
	return curr;
}

Node *delNode(Node *root, int x){
	if(root==NULL)
		return root;
	if(root->key > x){
		root->left = delNode(root->left, x);
	}else if(root->key < x){
		root->right = delNode(root->right, x);
	}else{
		if(root->left == NULL){
			Node *temp= root->right;
			delete root;
			return temp;
		}
		else if(root->right == NULL){
			Node *temp = root->left;
			delete root;
			return temp;
		}
		else{
			Node *succ = getSuccessor(root);
			root->key = succ->key;
			root->right = delNode(root->right, succ->key);
		}
	}
	return root;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(15);
	root->left = new Node(5);
	root->left->left = new Node(3);
	root->right = new Node(20);
	root->right->left = new Node(18);
	root->right->right = new Node(80);
	root->right->left->left = new Node(16);

	line_by_line_traversal(root);
	delNode(root, 18);
	line_by_line_traversal(root);
	

	return 0;
}