/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* sortLinkedList(struct ListNode* head){
    struct ListNode* q = head;
    struct ListNode* p = head->next;
    
    while (p)
    {
        if (q->val > p->val)
        {
            q->next = p->next;
            p->next = head;
            head = p;
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