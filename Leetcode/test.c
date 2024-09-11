#include <stdio.h>
#include<stdlib.h>

typedef struct Node{
   int data; 
   struct Node *next ;
}Head;

Head *addnode(Head *head , int data){
   Head *ptr = (Head *)malloc(sizeof(Head));
   ptr->data = data; 
   ptr->next = NULL;
   if( head == NULL){
      head = ptr; 
   }
   else{
      Head *t = head;
      while(t->next != NULL){
         t = t->next;
      }
      t->next = ptr; 
   }
   return head ;
}
void printlist(Head *head){
   Head *temp  = head; 
   while(temp != NULL){
      printf("%d ", temp->data);
      temp = temp->next;
   }
   printf("\n");
}

Head* reverselist(Head *head){
   Head * curr = head , *prev = NULL , *next ;
   while(curr != NULL){
      next = curr->next;
      curr->next = prev;
      prev = curr ; 
      curr = next ;
   }
   return prev ;
}

void middleoflist(Head *head){
   Head * fast = head , *slow = head; 
   while(fast != NULL && fast->next != NULL){
      slow = slow->next;
      fast = fast->next->next;
   }
   printf(" middle of list %d ", slow->data);
}
void deletenode(Head *head , int val){
   Head *temp , *back ; 
   while(temp->next->data != val){
      temp = temp->next;
   }
   back = temp->next;
   temp->next = temp->next->next;
   free(back);
}
int main() {

Head *head = NULL ; 
head = addnode(head , 1 );
head = addnode(head , 2 );
head = addnode(head , 3 );
head = addnode(head , 4 );
head = addnode(head , 5 );
printlist(head);
head = reverselist(head);
printlist(head);
deletenode(head , 4);
printlist(head);
middleoflist(head);
    return 0;
}