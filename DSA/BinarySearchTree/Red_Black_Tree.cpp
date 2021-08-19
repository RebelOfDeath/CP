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
		Red Black Tree : 
		-------------------

		1 - every node is either red or black

		2 - root is always black

		3 - now two consective reds

		4 - number of black nodes from every node to all of its descondent leaves should be same


		Number of nodes on the path from a node ot its farthest descendant left should not be more than
		twice than the number of nodes on the path to its closest descendant leaf

	*/	

	return 0;
}