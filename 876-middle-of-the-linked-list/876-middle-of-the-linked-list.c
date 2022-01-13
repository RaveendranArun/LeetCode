/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* p = head->next;
    struct ListNode* q = head;
    while (p)
    {
        p = p->next;
        if (p)
            p = p->next;
        q = q->next;
    }
    
    return q;
}