/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    struct ListNode* p = list1;
    struct ListNode* q = NULL;
    struct ListNode* r = NULL;
    int i;
    int j;
    
    for (i = 0; i < a-1; ++i)
        p = p->next;
    
    q = p;
    for (j = i; j <= b; ++j)
        q = q->next;
    
    p->next = list2;
    r = list2;
    
    while (r->next)
        r = r->next;
    r->next = q;
    
    return list1;
    
}