#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

int count_nodes_in_complete(Node *root){
    if(root == NULL)
        return 0;
    Node *temp = root;
    int hl = 0;
    while(temp != NULL){
        hl++;
        temp = temp->left;            
    }
    int hr = 1;
    temp = root;
    while(temp != NULL){
        hr++;
        temp = temp->right;
    }
    if(hl == hr){
        return pow(2, hr)-1;
    }else{
        return  1 + count_nodes_in_complete(root->left) + count_nodes_in_complete(root->right);
    }
}

int main() {
	
	Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    

    cout << count_nodes_in_complete(root) << '\n';

    return 0;
}