/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp = head;
        ListNode *prev = NULL;
        ListNode *next = NULL;
        
        //if(!head || !(head->next)) return head;
        
        while(temp != NULL){
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        
        return prev;
        
    }
};
