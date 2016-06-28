/* A binary tree node
struct Node
{
    int data;
    struct Node* left, * right;
}; */


// Convert a given tree to a tree where every node contains sum of values of
// nodes in left and right subtrees in the original tree
int createSumTree(struct Node * root){
    if(root==NULL){
        return 0;
    }
    else{
      int old_data=root->data;
       root->data=createSumTree(root->left)+createSumTree(root->right);
       return old_data+root->data;  
    }
  }
void toSumTree(struct Node *root)
{
createSumTree(root);  
}

