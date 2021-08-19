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

Node* floor_val(Node *root, int x){
	Node *res = NULL;
	while(root != NULL){
		if(root->key == x){
			return root;
		}else if(root->key > x){
			root = root->left;
		}else{
			res = root;
			root = root->right;
		}
	}
	return  res;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(15);
	root->right->left = new Node(12);
	root->right->right = new Node(30);

	line_by_line_traversal(root);
	cout << (floor_val(root, 14))->key << '\n';
	

	return 0;
}