/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* p = headA;
    struct ListNode* q = NULL;
    
    while (p)
    {
        q = headB;
        while (q)
        {
            if (p == q)
                return p;
            q = q->next;
        }
        p = p->next;
    }
    
    return NULL;
}