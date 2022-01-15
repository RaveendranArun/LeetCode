/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* f = head;
    struct ListNode* s = head;
   
    if (head == NULL)
        return false;
    do
    {
        s = s->next;
        f = f->next;
        f = f ? f->next : f; 
    }while ((s && f) && (s != f));
    
    if (s == NULL && f == NULL)
        return false;
    
    return (s == f) ? 1: 0;
}