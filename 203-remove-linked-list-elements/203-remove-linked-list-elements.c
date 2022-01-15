/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* p = head;
    struct ListNode* q = NULL;
    
    while (p)
    {
        if (p->val == val)
        {
            if (p == head)
            {
                head = p->next;
                free(p);
                p = head;
            }
            else
            {
                q->next = p->next;
                free(p);
                p = q->next;
            }
        }
        else
        {
            q = p;
            if (p)
                p = p->next;
        }
    }
    
    return head;
}