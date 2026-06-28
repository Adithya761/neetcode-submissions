class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* first = dummy;
        ListNode* second = dummy;

        // Move first ahead by n+1 steps
        for(int i = 0; i <= n; i++){
            first = first->next;
        }

        // Move both until first reaches end
        while(first != nullptr){
            first = first->next;
            second = second->next;
        }

        // Delete the nth node
        ListNode* toDelete = second->next;
        second->next = second->next->next;
        delete toDelete;

        return dummy->next;
    }
};
