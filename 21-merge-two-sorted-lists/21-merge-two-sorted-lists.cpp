/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* join(ListNode* list1, ListNode* list2) {
    ListNode* head = list1;
    ListNode* pre = list1;
    ListNode* tmp1 = list1 ;
    ListNode* tmp2 = list2 ;
    while (tmp1!= nullptr && tmp2!= nullptr){
        if (tmp1->val== tmp2->val){
            ListNode* x = tmp2;
            tmp2 = tmp2->next ;
            x->next = tmp1->next;
            tmp1->next = x ;
            pre = tmp1 ;
            tmp1 = tmp1->next ;
        }else if(tmp1->val < tmp2->val){
            if (tmp1->next!= nullptr)
                if (tmp1->next->val> tmp2->val){
                    ListNode* x = tmp2;
                    tmp2 = tmp2->next ;
                    x->next = tmp1->next;
                    tmp1->next = x ;
                    pre = tmp1;
                    tmp1 = tmp1->next ;
                }else
                    tmp1 = tmp1->next ;
            else
            {
                tmp1->next=tmp2;
                break;
            }
        }
        else
        {
            ListNode* x = tmp2;
            tmp2 = tmp2->next ;
            x->next = tmp1;
            pre->next = x ;
            pre = x ;
            tmp1=tmp1->next;
        }
    }
    return head;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (list1 == nullptr)
        return list2 ;
    if (list2== nullptr)
        return list1;
    
    if (list1->val < list2->val)
        return join(list1,list2);
    else
        return join(list2,list1);
}
};