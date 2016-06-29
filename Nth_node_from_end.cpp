/* struct Node
 {
   int data;
   struct Node* next;
 }; */
#include<vector>
/* Should return data of n'th node from the end of linked list */
int getNthFromLast(struct Node *head, int n)
{
     if(head==NULL){
         return -1;
     }
     int length=0;
     struct Node  * current=head;
     vector<int> V;
     V.push_back(-1);
     while(current!=NULL){
         length++;
         V.push_back(current->data);
         current=current->next;
     }
     if(n>length){
         return -1;
     }
     else{
        return V[length-n+1]; 
     }
       
}
