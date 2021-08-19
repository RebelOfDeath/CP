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


Node* search(Node *root, int k){
	Node *curr = root;
	while(curr!=NULL){
		if(curr->key == k){
			return curr;
		}else if(curr->key > k){
			curr = curr->left;
		}else{
			curr = curr->right;
		}
	}
	return curr;
}

bool search_recursive(Node *root, int k){
	if(root == NULL){
		return false;
	}else if(root->key == k){
		return true;
	}else if(root->key > k){
		return search_recursive(root->left, k);
	}else{
		return search_recursive(root->right, k);
	}
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


	Node *found = search(root, 18);
	cout << ((found==NULL) ? (-1) : (found->key)) << '\n';


	cout << std::boolalpha << search_recursive(root, 81) << '\n';

	

	return 0;
}