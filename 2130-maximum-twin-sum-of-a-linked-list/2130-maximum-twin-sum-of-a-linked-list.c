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

int pairSum(struct ListNode* head){
    int* nums = (int* )malloc(sizeof(int) * Count(head));
    struct ListNode* p = head;
    int k = 0;
    int i;
    int maxSum = INT32_MIN;
    int sum = 0;
    
    while (p)
    {
        nums[k++] = p->val;
        p = p->next;
    }
   
    for (i = 0; i <= (k/2)-1; ++i)
    {
        sum = nums[i] + nums[k-1-i];
        if (sum > maxSum)
            maxSum = sum;
    }
    
    return maxSum;
}