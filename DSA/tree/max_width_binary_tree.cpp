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


int max_width_bin_tree(Node *root){
	if(root == NULL)
		return 0;
	queue<Node*> q;
	q.push(root);
	int max_int{0};
	while(q.empty()==false){
		int count = q.size();
		max_int = max(max_int, count);
		for(int i{0}; i < count; i++){
			Node *curr = q.front();
			q.pop();
			if(curr->left != NULL)
				q.push(curr->left);
			if(curr->right != NULL)
				q.push(curr->right);
		}
	}
	return max_int;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	root->right->left = new Node(50);
	root->right->right = new Node(60);
	root->left->left->left = new Node(80);


	cout << max_width_bin_tree(root) << '\n';
	

	return 0;
}