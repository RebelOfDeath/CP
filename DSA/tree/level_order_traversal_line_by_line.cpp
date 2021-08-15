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

//this is also known as BFS
void level_order_traversal_line_by_line1(Node *root){
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
}


void level_order_traversal_line_by_line2(Node *root){
	if(root == NULL)
		return;
	queue<Node*> q;
	q.push(root);
	while(q.empty() == false){
		int count = q.size();
		for(int i{0}; i < count; i++){
			Node *curr = q.front();
			q.pop();
			cout << curr->key << " ";
			if(curr->left != NULL)
				q.push(curr->left);
			if(curr->right != NULL)
				q.push(curr->right);
		}
		cout << '\n';
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	root->left->right = new Node(50);
	root->right->right = new Node(70);

	level_order_traversal_line_by_line1(root);
	cout << '\n';
	level_order_traversal_line_by_line2(root);
	cout << '\n';


	return 0;
}