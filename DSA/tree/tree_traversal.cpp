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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//there are two types of traversal of the tree
	//breadth first (or level order) (BFS)
	//depth first (DFS)
		//inorder (left root right)
		//preorder (root left right)
		//postorder (left right root)


	//in this file depth first traversal is going to be done
	//the recursive process for this is:
		// traverse root -> traverse left subtree -> traverse right subtree 		this is not in any particular order


	//for the implementations of inorder, preorder, postorder traversal reffer to their own files



	return 0;
}