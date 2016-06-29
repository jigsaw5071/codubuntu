/* A binary tree node structure
struct Node {
    int data;
    struct Node* left, * right;
}; */

// This function should return tree if passed  tree 
// is balanced, else false.  Time complexity should
//  be O(n) where n is number of nodes in tree
int maximum(const int &x,const int &y){
    return (x>y)?x:y;
}
int getHeight(struct Node *root){
    if(root==NULL){
        return 0;
    }
    int left_height=getHeight(root->left);
    int right_height=getHeight(root->right);
    if(left_height==-1 || right_height==-1){
        return -1;
    }
    else if(abs(left_height-right_height)<2){
        return 1+maximum(left_height,right_height);
    }
    else{
        return -1;
    }
    
    
}

bool isBalanced(struct Node *root)
{
 if(getHeight(root)==-1){
     return false;
 }   
 else{
     return true;
 }
}
