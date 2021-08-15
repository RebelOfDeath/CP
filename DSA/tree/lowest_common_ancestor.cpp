//this problem is, given two nodes in a binary tree you have to find the nearest ancestor of the two nodes
//so basically to find the nearst node higher than them which they both root from
//this could be the head node, or they could be siblings from the same partent LOL :)
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

/*
	1 - requires one traversal and O(n) extra space for the recursive traversal

	2 - assumes that both n1 and n2 exist in the tree. Does not give correct result when only n1 or n2 exist
	
	the idea for this is:
	----------------------

	we do normal recursive traversal. We have the following case for every node.

	1. if it is same as n1 or n2.
	2. if one of its subtress contains n1 and other contains n2.
	3. if one of its subtrees contains both n1 and n2.
	4. if none of its subrees contains any of n1 and n2.
*/
Node *lca(Node *root, int n1, int n2){
	if(root == NULL){
		return NULL;
	}
	if(root->key == n1 || root->key == n2)
		return root;
	Node *lca1 = lca(root->left, n1, n2);
	Node *lca2 = lca(root->right, n1, n2);
	if(lca1 != NULL && lca2 != NULL){
		return root;
	}
	if(lca1 != NULL)
		return lca1;
	else{
		return lca2;
	}
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->right->left = new Node(40);
	root->right->right = new Node(50);
	root->right->left->left = new Node(60);
	root->right->right->left = new Node(70);
	root->right->right->right = new Node(80);
	


	cout << lca(root, root->right->left->left->key, root->right->right->left->key)->key << '\n';




	return 0;
}