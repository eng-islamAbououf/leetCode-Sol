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
    ListNode* reverseList(ListNode* head) {
    if(head == nullptr)
        return head; 
    if (head->next == nullptr){
        ListNode* x = head ;
        return x ;
    }
    ListNode* tmp = reverseList(head->next) ;
    ListNode* x = tmp;
    while (x->next != nullptr) x = x->next ;
    x->next =new ListNode(head->val) ;
    return tmp ;
}
};