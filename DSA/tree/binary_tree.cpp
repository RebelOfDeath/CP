#include<bits/stdc++.h>

using namespace std;

struct Node{

	int key;
	Node *left;
	Node *right;
	Node(int k){
		key = k;
		left = right = NULL;
	}

};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//binary tree is a tree which each node having at most 2 children, all nodes are at most of degree 2
	//each node in a binary tree has tree main sections, left child reffernce, ket/data, right child refference			**This is the most common way of representation**


	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);


	return 0;
}