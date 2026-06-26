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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* getKnode(ListNode* temp,int k){
       k -= 1;
        while(temp != NULL && k >0){
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        if(head == nullptr || head->next == nullptr || k == 1) return head;
        while(curr != nullptr){
            ListNode* kthNode = getKnode(curr,k);
            if(kthNode == nullptr){
                if(prev != nullptr){
                    prev->next = curr;
                }
                break;   
            }
            ListNode* nextNode = kthNode->next;
            kthNode->next = nullptr;
            reverse(curr);
            //starting swap
            if(head == curr){
                head = kthNode;
            }
            else{
                prev->next = kthNode;
            }
            prev = curr;
            curr = nextNode;
        }
        return head;
    }
};
