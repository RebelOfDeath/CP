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

unordered_set<int> s;
bool check_for_sum(Node *root, int sum){
	if(root == NULL)
		return false;
	if(check_for_sum(root->left, sum) == true){
		return true;
	}
	if(s.find(sum-root->key) != s.end())
		return true;
	else
		s.insert(root->key);
	return check_for_sum(root->right, sum);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(10);
	root->left = new Node(8);
	root->right = new Node(20);
	root->left->left = new Node(4);
	root->left->right = new Node(9);
	root->right->left = new Node(11);
	root->right->right = new Node(30);
	root->right->right->left = new Node(25);


	int sum = 33;

	cout << std::boolalpha << check_for_sum(root, sum) << '\n';	

	return 0;
}