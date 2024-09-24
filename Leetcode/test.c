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
