/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* findFirstHalf(struct ListNode* p)
{
    struct ListNode* s = p;
    struct ListNode* f = p;
    
    while ((p->next != NULL) && (p->next->next) != NULL)
    {
        p = p->next->next;
        s = s->next;
    }
    
    return s;
}

struct ListNode* reverseSecondHalf(struct ListNode* node)
{
    struct ListNode* r = NULL;
    struct ListNode* q = NULL;
    struct ListNode* p = node;
    
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    node = q;
    return node;
}

bool isPalindrome(struct ListNode* head){
    
    if (head == NULL)
        return true;
    
    struct ListNode* first = findFirstHalf(head);
    struct ListNode* second = reverseSecondHalf(first->next);
    
    bool result = true;
    struct ListNode* p = head;
    struct ListNode* q = second;
    while (result && q != NULL)
    {
        if (p->val != q->val)
            result = false;
        p = p->next;
        q = q->next;
    }
    
    second = reverseSecondHalf(second);
    return result;
}