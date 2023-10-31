#include <bits/stdc++.h>
using namespace std;

struct Node {

    int data;
    Node * left , *right;
}

struct node* insert(struct node* node, int key)
{
    // If the tree is empty, return a new node
    if (node == NULL)
        return newNode(key);
 
    // Otherwise, recur down the tree
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
 
    // Return the (unchanged) node pointer
    return node;
}
struct Node * search(Node * node , int key){
    
    if (root==NULL || root->key == 0){
        return root;
    }
    else if (root->key<key){
       return search(root->right ,key);
    }
    else  (root->key >key){
        return search (root->left ,key);
    }
}

