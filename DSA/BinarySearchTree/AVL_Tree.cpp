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


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	/*
		AVL Tree:
		----------------

		1. it is a BST (for every node, left subtree is smaller and right greater)

		2. it is balanced (for every node, difference between left and right heights does not exceed one)

			balance_factor = |lh - rh|
			balance_factor < 1




		operations :
		----------------

			insert:

				perform normal BST insert

				traverse all ancestors of the newly inserted node from the node to root

				if an unbalnced node is found, chack for any of the following cases:


					single rotation case:

					1 - left left (clockwise rotation)
					2 - right right (anti-clockwise rotation)

					double roattion case:

					3 - left right (make left left case and proceed)
					4 - right left (make right right case and proceed)
	*/	

	return 0;
}