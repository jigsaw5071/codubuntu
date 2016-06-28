/* Link list Node  
struct Node {
    int data;
    struct Node* next;
}; */

struct Node* SortedMerge(struct Node* head1,  struct Node* head2)
{
    struct Node *head;
    struct Node *current1=head1;
    struct Node *current2=head2;
    if(head1 !=NULL && head2!=NULL){
    if(current1->data<current2->data){
        head=head1;
        current1=current1->next;
    }
    else{
        head=head2;
        current2=current2->next;
    }
    struct Node *current=head;
    while(current1!=NULL && current2!=NULL){
        if(current1->data < current2->data){
            
                current->next=current1;
                current1=current1->next;
                current=current->next;
                current->next=NULL;
            
        }
        else{
          
              current->next=current2;
              current2=current2->next;
              current=current->next;
              current->next=NULL;
          
        }
        
    }
    while(current1!=NULL){
                current->next=current1;
                current1=current1->next;
                current=current->next;
                current->next=NULL;
    }
    while(current2!=NULL){
              current->next=current2;
              current2=current2->next;
              current=current->next;
              current->next=NULL;
    }
    }
    else if(head1!=NULL){
        head=head1;
    }
    else if(head2!=NULL){
        head=head2;
    }
    else{
        head=NULL;
    }
    return head;
}
