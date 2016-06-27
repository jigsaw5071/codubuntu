/* A binary tree node
struct node
{
    int data;
    struct Node* left, * right;
}; */


/*you are required to 
complete this function */
Node * LCA(Node* root ,int n1 ,int n2 )
{
if(root==NULL){
    return NULL;
}
if(root->data==n1 || root->data==n2){
    return root;
}
struct Node * left_root=LCA(root->left,n1,n2);
struct Node * right_root=LCA(root->right,n1,n2);
if(left_root!=NULL && right_root!=NULL){
    return root;
}
else if(left_root!=NULL){
    return left_root;
}
else if(right_root!=NULL){
    return right_root;
}
else{
    return NULL;
}
}
