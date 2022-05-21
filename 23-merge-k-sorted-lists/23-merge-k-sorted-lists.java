/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        if (lists.length==0)
            return null;
        ListNode ans = lists[0];
        
        int i =1 ;
        while (ans==null && i< lists.length)
            ans=lists[i++];

        for (; i< lists.length;i++){
            if (lists[i]==null)
                continue;
            if (ans.val>lists[i].val)
                ans=join(lists[i],ans);
            else
                ans = join(ans,lists[i]);
        }
        return ans;
    }
    ListNode join(ListNode list1, ListNode list2) {
        ListNode head = list1;
        ListNode pre = list1;
        ListNode tmp1 = list1 ;
        ListNode tmp2 = list2 ;
        if (list1==null)
            return list2 ;
        if (list2==null)
            return list1;
        while ( tmp1!=null && tmp2!=null){
            if (tmp1.val== tmp2.val){
                ListNode x = tmp2;
                tmp2 = tmp2.next ;
                x.next = tmp1.next;
                tmp1.next = x ;
                pre = tmp1 ;
                tmp1 = tmp1.next ;
            }else if(tmp1.val < tmp2.val){
                if (tmp1.next!=null)
                if (tmp1.next.val> tmp2.val){
                    ListNode x = tmp2;
                    tmp2 = tmp2.next ;
                    x.next = tmp1.next;
                    tmp1.next = x ;
                    pre = tmp1;
                    tmp1 = tmp1.next ;
                }else
                    tmp1 = tmp1.next ;
                else
                {
                    tmp1.next=tmp2;
                    break;
                }
            }
            else
            {
                ListNode x = tmp2;
                tmp2 = tmp2.next ;
                x.next = tmp1;
                pre.next = x ;
                pre = x ;
                tmp1=tmp1.next;
            }
        }
        return head;
    }
}