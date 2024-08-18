/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


#include<stdio.h> 
#include<stdlib.h> 

struct ListNode
{
    int val;
    struct ListNode *next;
};
struct ListNode *removeElements(struct ListNode *head, int val)
{
    struct ListNode *temp = head, *prev;
    while (temp != NULL && temp->val == val)
    {
        printf("value is %d \n ", temp->val);
        head = temp->next;
        free(temp);
        temp = head;
    }

    if (temp == NULL)
    {
        return temp;
    }
    else
    {

        do
        {
            printf("value is %d \n ", temp->val);
            if (temp->val == val)
            {

                if (temp->next == NULL)
                {
                    free(temp);
                    prev->next = NULL;
                    // head = NULL;
                    return head;
                }
                prev->next = temp->next;
                free(temp);
                // struct ListNode *temp ;
                temp = prev->next;
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        } while (temp != NULL);
    }
    return head;
}