#include <bits/stdc++.h>
using namespace std;

struct Node {

    int data;
    Node * left , *right;
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

