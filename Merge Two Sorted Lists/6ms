/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode*top = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode*tail = (struct ListNode*)malloc(sizeof(struct ListNode));
    if(l1 == NULL)
        return l2;
    else if(l2 == NULL)
        return l1;
    if(l1->val < l2->val) {
        top = l1;
        tail = top;
        l1 = l1->next;
    }else{
        top = l2;
        tail = top;
        l2 = l2->next;
    }
    while(l1 != NULL && l2 != NULL) {
        if(l1->val < l2->val) {
            tail->next = l1;
            tail = tail->next;
            l1 = l1->next;
        }else{
            tail->next = l2;
            tail = tail->next;
            l2 = l2->next;
        }
    }
    if(l1 != NULL){
        tail->next = l1;
    }else if(l2 != NULL){
        tail->next = l2;
    }
    return top;
}
