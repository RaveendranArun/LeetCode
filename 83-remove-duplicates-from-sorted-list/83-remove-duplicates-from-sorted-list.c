/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* q = head;
    struct ListNode* p = NULL;
    
    if (q == NULL)
        return NULL;
    
    if (head->next)
        p = head->next;
    
    while (p)
    {
        if (p->val == q->val)
        {
            q->next = p->next;
            free(p);
            p = q->next;
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
    return head;
}