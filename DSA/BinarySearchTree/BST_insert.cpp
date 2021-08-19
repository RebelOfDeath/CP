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

Node* insert(Node *root, int x){
	Node *temp = new Node(x);
	if(root == NULL){
		root = temp;
	}
	Node *curr = root, *prev = NULL;
	while(curr!=NULL){
		if(curr->key == x){
			return  root;
		}else if(curr->key > x){
			prev = curr;
			curr = curr->left;
		}else{
			prev = curr;
			curr = curr->right;
		}
	}
	(prev->key > x) ? (prev->left = temp) : (prev->right = temp);
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
	insert(root, 90);
	line_by_line_traversal(root);
	

	return 0;
}