/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode hasCycle(ListNode head) {
        if(head == null )
            return null ;
        
        ListNode slow = head;
        ListNode fast = head;
        
        while(fast!=null && fast.next!=null){
            
            fast = fast.next.next ;
            slow = slow.next ;
            
            if(fast == slow )
                return slow ;
        }
        return null ;
    }
    public ListNode detectCycle(ListNode head) {
        if(head == null || head.next == null)
            return null ;
        ListNode cycle = hasCycle(head) ;
        if (cycle != null){
            ListNode st = head ; 
            while (cycle != st){
                cycle = cycle.next ;
                st = st.next ;
            }
        }
        return cycle ;
    }
}