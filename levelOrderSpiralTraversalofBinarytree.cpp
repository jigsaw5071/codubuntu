/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct node
{
    int data;
    struct node* left;
    struct node* right;
}; */

#include<deque>
void printSpiral(struct node *root)
{
if(root==NULL){
    return ;
}    
deque<struct node *> Q;
int node_level_count=0;
bool left_right=true;
Q.push_back(root);
while(!Q.empty()){
node_level_count=Q.size();
left_right=!left_right;
while(node_level_count--){
    if(left_right){
        struct node * temp=Q.front();
        Q.pop_front();
        cout<<temp->data<<" ";
        if(temp->left!=NULL){
            Q.push_back(temp->left);
        }
        if(temp->right!=NULL){
            Q.push_back(temp->right);
        }
    }
    else{
        struct node * temp=Q.back();
        Q.pop_back();
        cout<<temp->data<<" ";
        if(temp->right!=NULL){
            Q.push_front(temp->right);
        }
        if(temp->left!=NULL){
            Q.push_front(temp->left);
        }
        
    }
}
    
    
}
}
