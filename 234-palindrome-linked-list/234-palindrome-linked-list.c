/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int Count(struct ListNode* p)
{
    int count = 0;
    while (p)
    {
        ++count;
        p = p->next;
    }
    return count;
}

bool isPalindrome(struct ListNode* head){
    int* nums = (int* )malloc(sizeof(int) * Count(head));
    int k = 0;
    int i, j;
    
    while (head)
    {
        nums[k++] = head->val;
        head = head->next;
    }
    
    for (i = 0, j = k-1; i < j; ++i, --j)
    {
        if (nums[i] != nums[j])
            return false;
    }
    
    return true;
}