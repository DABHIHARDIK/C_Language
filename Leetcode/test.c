#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
   int data;
   struct node *next;
} Node;

void addnode(Node *, int);
void printlist(Node *);

int main()
{
   Node *head = NULL;
   addnode(head, 1);
   printlist(head);
   return 0;
}

void addnode(Node *head, int data)
{
   Node *temp = head;
   Node *ptr = (Node *)malloc(sizeof(Node));
   ptr->data = data;
   ptr->next = NULL;

   if (temp == NULL)
      head = ptr;
}

void printlist(Node *head)
{
   Node *temp = head;
   while (temp != NULL)
   {
      printf("%d ", temp->data);
      temp = temp->next;
   }
}
<<<<<<< HEAD
=======

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
printf(" %d " , isHappy(10));
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
printlist(head);
    return 0;
}
>>>>>>> refs/remotes/origin/main
