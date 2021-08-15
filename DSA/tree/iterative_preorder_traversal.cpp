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

void iterative_preorder(Node *root){
	if(root == NULL)
		return;
	stack<Node*> s;	
	s.push(root);
	while(s.empty() == false){
		Node *curr = s.top();
		cout << curr->key << " ";
		s.pop();
		if(curr->right!=NULL)
			s.push(curr->right);
		if(curr->left != NULL)
			s.push(curr->left);
	}
	cout << '\n';
}


void inorder_traversal_space_optimized(Node *root){
	if(root == NULL)
		return;
	stack<Node*> s;
	Node *curr = root;
	while(curr != NULL || s.empty() == false){
		while(curr != NULL){
			cout << curr->key << " ";
			if(curr->right != NULL)
				s.push(curr->right);
			curr = curr->left;
		}
		if(s.empty() == false){
			curr = s.top();
			s.pop();
		}
	}
	cout << '\n';
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);

	iterative_preorder(root);
	cout <<'\n';
	inorder_traversal_space_optimized(root);
	

	return 0;
}