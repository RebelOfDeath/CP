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


void spiral_traversal(Node *root){
	if(root == NULL)
		return;
	queue<Node*> q;
	stack<Node*> s;
	bool reverse = false;
	q.push(root);
	while(q.empty() == false){
		int count = q.size();
		for(int i{0}; i < count; i++){
			Node *curr = q.front();
			q.pop();
			if(reverse){
				s.push(curr);
			}else{
				cout << curr->key << " ";
			}
			if(curr->left != NULL){
				q.push(curr->left);
			}
			if(curr->right != NULL){
				q.push(curr->right);
			}
		}
		if(reverse){
			while(s.empty() == false){
				cout << s.top()->key << " ";
				s.pop();
			}
		}
		reverse = !reverse;
		cout << '\n';
	}
}


void  spiral_traversal2(Node *root){
	stack<Node*> s1; 
	stack<Node*> s2;

	s1.push(root);
	while(s1.empty() == false || s2.empty()  == false){
		while(s1.empty() == false){
			cout << s1.top()->key << " ";
			if(s1.top()->left != NULL){
				s2.push(s1.top()->left);
			}
			if(s1.top()->right != NULL){
				s2.push(s1.top()->right);
			}
			s1.pop();
		}
		cout << '\n';
		while(s2.empty() == false){
			cout << s2.top()->key << " ";
			if(s2.top()->right != NULL){
				s1.push(s2.top()->right);
			}
			if(s2.top()->left != NULL){
				s1.push(s2.top()->left);
			}
			s2.pop();
		}
		cout << '\n';
	}

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	root->left->left->left = new Node(8);
	root->left->left->right = new Node(9);
	root->right->left->left = new Node(10);
	

	spiral_traversal(root);
	cout  << "\n\n";
	spiral_traversal2(root);


	return 0;
}