/*

The structure of linked list is the following

struct node
{
int data;
node* next;
};
// Instead you need to do it fast because fast moves extremely fast 
// than slow in case of a null
// To find the start of the loop put fast as it is and move slow =head
*/
int detectloop(struct node *head){
if(head==NULL){
    return 0;
}    
struct node * slow =head;
struct node * fast = head;
bool loop_found=false;
while(slow!=NULL && fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
        loop_found=true;
        break;
    }
    
}
if(loop_found){
    return 1 ;
}
else{
    return 0;
}

}
