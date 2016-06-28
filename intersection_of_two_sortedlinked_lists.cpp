/* The structure of the Linked list Node is as follows:
struct node {
    int val;
    struct node* next;
}; */

void intersection(struct node **head1, struct node **head2, struct node **head3)
{
struct node * current_1=*head1;
struct node * current_2=*head2;
while(current_1!=NULL && current_2!=NULL){
    if(current_1->val==current_2->val){
     if(*head3==NULL){
         struct node * temp=new node;
         temp->val=current_1->val;
         temp->next=NULL;
         *head3=temp;
     }   
     else{
         struct node * current_3=*head3;
         while(current_3->next!=NULL){
             current_3=current_3->next;
         }
         current_3->next=new node;
         current_3=current_3->next;
         current_3->val=current_1->val;
         current_3->next=NULL;
     }
     current_1=current_1->next;
     current_2=current_2->next;
    }
    else if(current_1->val < current_2->val){
        current_1=current_1->next;
    }
    else{
        current_2=current_2->next;
    }
}
}
