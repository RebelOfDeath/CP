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
		The main idea of a self balancing BST is to keep the  height as O(log N) where n is the number of nodes

			the reason for this is to not let a binary tree to become linear

				background : same set of keys can make different height BST's

		so the idea is, if we know the keys in advance, we can make a perfectly balanced BST.

				the idea for this would be to sort all the numbers, then you can recursively build the bst from the middle element then the mid of left side and mid of right 
				and so on.


		How to keep it balanced when random insertion / deletions happening? 

			the idea is to do some restructing (or re-balancing) when doing insertions / deletions.
			because these are the operations that can make a BST become linear

			the main idea in use in BST is  rotation:

				variations of this are :

					 -right rotation

					 -left rotation

			two examples of BST tree's are:

				- AVL Tree
					very strict balance

				-Red Black  Tree
					loose in terms of balance
					used more





		applications of BST :
		------------------------

		to maintain sorted strem of data (or sorted set of data)

		to implement doubly ended priority queue

		to solve problems like :

			count smaller/greater in a stream

			floor/ceiling/greater/smaller in a stream
		

	*/

	return 0;
}