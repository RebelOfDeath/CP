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


void print_left_view(Node *root){
	if(root == NULL){
		return;
	}
	queue<Node*> q;
	q.push(root);
	while(q.empty() == false){
		int count = q.size();
		for(int i{0}; i < count; i++){
			Node *curr = q.front();
			q.pop();
			if(i==0){
				cout << curr->key << " ";
			}
			if(curr->left != NULL){
				q.push(curr->left);
			}
			if(curr->right != NULL){
				q.push(curr->right);
			}
		}
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


	print_left_view(root);
	cout << '\n';
	
	return 0;
}