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

void ver_traverse(Node *root){
	map<int,vector<int>> mp;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(q.empty()==false){
        auto p=q.front();
        Node *curr=p.first;
        int hd=p.second;
        mp[hd].push_back(curr->key);
        q.pop();
        if(curr->left!=NULL)
            q.push({curr->left,hd-1});
        if(curr->right!=NULL)
            q.push({curr->right,hd+1});
    }
    for(auto x:mp){
        for(int y:x.second)
            cout<<y<<" ";
        cout<<endl;
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	Node *root = new Node(1);
	root->left = new Node(2);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right = new Node(3);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	root->right->right->left = new Node(8);
	root->right->right->left->left = new Node(9);


	ver_traverse(root);
	

	return 0;
}