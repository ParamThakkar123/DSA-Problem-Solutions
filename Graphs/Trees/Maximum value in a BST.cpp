#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    struct Node* parent;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
        parent = NULL;
    }
};

int treemax(Node* root) {
    if(root == NULL){
        return -1;
    }
    
    else if(root->left == NULL){
        return root->data;
    }
    
    else if(root->right != NULL){
        return treemin(root->right);
    }
    
    return root->data;
}


int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    cout << treemin(root);
}
