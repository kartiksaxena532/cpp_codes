class Solution{ 
    public:
    
    pair<bool,int> checkbalance(Node*root){
        
    if(root==NULL){ 
        
        pair <bool,int> p = make_pair(true,0);
        return p ; 
    }
    
    pair<int,int> left = isBalanced(root->left);
    pair <int,int> right = isBalanced(root->right);
    
    
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
    }
};
