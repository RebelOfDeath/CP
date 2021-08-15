//applications of this
/*
    sending data structure to other device via internet, for example sending hierarchy over the network

    generating test cases for binary tree problems
*/
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

const int Empty = -1;
void serialize(Node *root, vector<int> &arr){
    if(root == NULL){
        arr.push_back(Empty);
        return;
    } 
    arr.push_back(root->key);
    serialize(root->left, arr);
    serialize(root->right, arr);
}


Node *deserialize(vector<int> &arr, int &index){
    if(index == arr.size()){
        return NULL;
    }
    int val = arr[index];
    index++;
    if(val == Empty){
        return NULL;
    }
    Node *root = new Node(val);
    root->left = deserialize(arr, index);
    root->right= deserialize(arr, index);
    return root;
}

void inorder_traversal(Node *root){
    if(root == NULL)
        return;
    inorder_traversal(root->left);
    cout << root->key << " ";
    inorder_traversal(root->right);
}

int main() {
	
	Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    
    vector<int> arr;
    serialize(root, arr);
    for(auto x : arr){
        cout << x << " ";
    }
    cout << '\n';

    int index = 0;
    Node *root_new = deserialize(arr, index);
    inorder_traversal(root_new);
    cout << '\n';

    return 0;
}