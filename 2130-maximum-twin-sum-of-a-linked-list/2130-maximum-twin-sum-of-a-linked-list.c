/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* findFirstHalf(struct ListNode* p)
{
    struct ListNode* s= p;
    struct ListNode* f = p;
    
    while(f->next != NULL && f->next->next != NULL)
    {
        s = s->next;
        f = f->next->next;
    }
    
    return s;
}

struct ListNode* reverseSecondHalf(struct ListNode* head)
{
    struct ListNode* r = NULL;
    struct ListNode* q = NULL;
    struct ListNode* p = head;
    
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head = q;
    return head;
}

int pairSum(struct ListNode* head){
    struct ListNode* first = findFirstHalf(head);
    struct ListNode* second = reverseSecondHalf(first->next);
    
    struct ListNode* p = head;
    struct ListNode* q = second;
    int sum = 0;
    int maxSum = INT32_MIN;
    while (p && q)
    {
        sum = p->val + q->val;
        if (sum > maxSum)
            maxSum = sum;
        p = p->next;
        q = q->next;
    }
    
    return maxSum;
}