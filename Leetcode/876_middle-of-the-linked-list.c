/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include<stdio.h>
#include<stdlib.h>
struct ListNode {
      int val;
     struct ListNode *next;
};
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *temp = head ; 
    if(temp->next == NULL)
    return head; 
    int count = 0 ; 
    do{
        count++;
        printf("value is %d\n",temp->val);
        temp = temp->next ;
    }
    while( temp!= NULL);
    printf("count value is %d\n",count);
    count = count/2+1;
    temp = head ; 
    int check = 0 ; 
    do{
        check++;
        if(check == count)
        {
            head = temp;
            return head;
        }
        temp = temp->next ;
    }
    while( temp!= NULL);

return head ; 
}