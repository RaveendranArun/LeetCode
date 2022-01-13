/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* r = NULL;
    struct ListNode* q = NULL;
    struct ListNode* p = head;
    
    while(p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head = q;
    
    return head;
}