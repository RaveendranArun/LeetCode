/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    
    struct ListNode* headNode = NULL;
    struct ListNode* childNode = NULL;
    int sum = 0;
    int carry = 0;
    struct ListNode* listNode1 = NULL;
    struct ListNode* listNode2 = NULL;
    struct ListNode* tmpNode = NULL;
    
    listNode1 = l1; 
    listNode2 = l2;
    
    while(listNode1 || listNode2) {
        sum = 0;
        if (listNode1 && listNode2) {
            sum = listNode1->val + listNode2->val + carry;
            carry = sum / 10;
            sum %= 10;
            listNode1 = listNode1->next;
            listNode2 = listNode2->next;
        } else if (listNode1) {
            sum = listNode1->val + carry;
            carry = sum / 10;
            sum %= 10;
            listNode1 = listNode1->next;
        } else if (listNode2) {
            sum = listNode2->val + carry;
            carry = sum / 10;
            sum %= 10;
            listNode2 = listNode2->next;
        }
        
        childNode = (struct Node* )malloc(sizeof(struct ListNode));
        childNode->val = sum;
        
        if (!headNode) {
            headNode = childNode;
            childNode->next = NULL;
            tmpNode = childNode;
        } else {
            tmpNode->next = childNode;
            childNode->next = NULL;
            tmpNode = childNode;
        }
    }

    if (carry) {
        childNode = (struct Node* )malloc(sizeof(struct ListNode));
        childNode->val = carry;
        tmpNode->next = childNode;
        childNode->next = NULL;
        tmpNode = childNode;
    }
    
    return headNode;
}