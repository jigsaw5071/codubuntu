/* A binary tree node
struct node
{
    int data;
    struct Node* left, * right;
}; */
#include<queue>
#include<stack>

queue<int> get_left_queue(node * root,queue<int> &Q){
    if(root->left!=NULL && root->right!=NULL){
        Q.push(root->data);
        return get_left_queue(root->left,Q);
    }
    else if(root->left!=NULL){
        Q.push(root->data);
        return get_left_queue(root->left,Q);
    }
    else if(root->right!=NULL){
        Q.push(root->data);
        return get_left_queue(root->right,Q);
    }
    else{
        return Q;
    }
    
}
void print_all_leafs(node * root){
//This function is used to print leafs from left to right    
if(root->left!=NULL && root->right!=NULL){
    print_all_leafs(root->left);
    print_all_leafs(root->right);
}
else if(root->left!=NULL){
    print_all_leafs(root->left);
}
else if(root->right!=NULL){
    print_all_leafs(root->right);
}
else{
    cout<<root->data<<" ";
    return ;
}
}

stack<int> get_right_stack(node *root,stack<int> &S){
    if(root->left!=NULL && root->right!=NULL){
        S.push(root->data);
        return get_right_stack(root->right,S);
    }
    else if(root->left!=NULL){
        S.push(root->data);
        return get_right_stack(root->left,S);
    }
    else if(root->right!=NULL){
        S.push(root->data);
        return get_right_stack(root->right,S);
    }
    else{
        return S;
    }
}

void printBoundary(node *root)
{
 if(root==NULL){
    return ;
 }   

queue<int> Q;
stack<int> S;
queue<int> Q_result;
stack<int> S_result;
if(root->left!=NULL){
Q_result=get_left_queue(root->left,Q);
}
if(root->right!=NULL){
S_result=get_right_stack(root->right,S);
}
cout<<root->data<<" ";
while(!Q_result.empty()){
    cout<<Q_result.front()<<" ";
    Q_result.pop();
}
print_all_leafs(root);
while(!S_result.empty()){
    cout<<S_result.top()<<" ";
    S_result.pop();
}

}
